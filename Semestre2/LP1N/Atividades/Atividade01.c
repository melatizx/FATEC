#include <stdio.h>
#include <string.h>
#include <locale.h>

char *unidadeRA(char raAluno[])
{
    char *unidade = "Fatec Sorocaba";

    if (strncmp(raAluno, "003", 3) == 0)
    {
        return unidade;
    }
    else
    {
        return "Unidade fora do banco de dados";
    }
}

char *cursoRA(char raAluno[])
{
    int posini = 3;
    int posfinal = 5;
    char codCurso[4];
    int c = 0, i, j = 0;
    char *curso[15][2] = {
        {"048", "Análise e Desenvolvimento de Sistemas (ADS)"},
        {"100", "Fabricação Mecânica (FMEC)"},
        {"099", "Projetos Mecânicos (PMEC)"},
        {"061", "Sistemas Biomédicos"},
        {"074", "Logística"},
        {"073", "Eletrônica Automotiva"},
        {"080", "Polímeros"},
        {"081", "Processos Metalúrgicos"},
        {"128", "Manufatura Avançada"},
        {"064", "Gestão Empresarial - EAD"},
        {"136", "Gestão da Qualidade"},
        {"068", "Manutenção de Aeronaves"},
        {"149", "Logística - AMS"},
        {"143", "Análise e Desenvolvimento de Sistemas - AMS"},
        {"090", "Automação Industrial"}};

    for (i = posini; i < posfinal; i++, j++)
    {
        codCurso[j] = raAluno[i];
    }
    codCurso[posfinal] = '\0';

    while (c <= 15)
    {
        if (strcmp(codCurso, curso[c][0]))
        {
            return curso[c][1];
            break;
        }
        c++;
    }
}

char *anoRA(char raAluno[])
{
    char *ano = (char *)malloc(5 * sizeof(char));

    ano[0] = '2';
    ano[1] = '0';
    ano[2] = raAluno[6];
    ano[3] = raAluno[7];
    ano[4] = '\0';

    return ano;
}

char semestreRA(char raAluno[])
{
    char semestre = raAluno[8];

    if (semestre == '1' || semestre == '2')
    {
        return semestre;
    }
    else
    {
        return "Semestre fora do padrão";
    }
}

char *periodoRA(char raAluno[])
{
    char periodo = raAluno[9];

    if (periodo == '1')
    {
        return "Diurno";
    }
    if (periodo == '2')
    {
        return "Matutino";
    }
    if (periodo == '3')
    {
        return "Noturno";
    }
    else
    {
        return "Periodo fora do padrão";
    }
}

void numeroAlunoRA(char raAluno[], char numeroSequencial[])
{
    int posini = 10;
    int posfinal = 14;
    int i, j = 0;

    for (i = posini; i <= posfinal; i++, j++)
    {
        numeroSequencial[j] = raAluno[i];
    }
    numeroSequencial[j] = '\0';
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    char raAluno[14];
    char numeroSequencial[4];

    printf("Digite o RA: ");
    scanf("%13s", raAluno);

    numeroAlunoRA(raAluno, numeroSequencial);

    printf("\nUnidade de ensino: %s", unidadeRA(raAluno));
    printf("\nCurso: %s", cursoRA(raAluno));
    printf("\nAno que ingresou: %s", anoRA(raAluno));
    printf("\nSemestre que ingressou: %c", semestreRA(raAluno));
    printf("\nPeriodo: %s", periodoRA(raAluno));
    printf("\nNumero sequencial do aluno: %s", numeroSequencial);
}