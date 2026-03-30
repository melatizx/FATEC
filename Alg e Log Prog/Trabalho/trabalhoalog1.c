#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int func, horatrab, setor, valorhora;
    float salario, valorhoraexc;

    printf("Nº do funcionario: \n");
    scanf("%d", &func);

    printf("Horas trabalhadas: \n");
    scanf("%d", &horatrab);

    setor = func / 1000;

    if (setor == 1)
    {
        valorhora = 7;
    }
    else if (setor == 2)
    {
        valorhora = 11;
    }
    else if (setor == 3)
    {
        valorhora = 18;
    }

    if (horatrab <= 400)
    {
        salario = horatrab * valorhora;
    }
    else
    {
        valorhoraexc = ((horatrab - 400) * valorhora) * 0.1;
        salario = (horatrab * valorhora) + valorhoraexc;
    }

    printf("Salario: R$%.2f", salario);

    return 0;
}
