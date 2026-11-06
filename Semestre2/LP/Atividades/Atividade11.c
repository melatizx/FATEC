#include <stdio.h>

struct IMOVEL
{
    int nrregistro;
    float valorimposto;
    int mesesatraso;
};

struct TABELAIMPOSTO
{
    float valorini;
    float valorfim;
    float percentual;
};

float calcularMuta(struct IMOVEL im, struct TABELAIMPOSTO tab[])
{
    int i;
    float multa = 0;

    for (i = 0; i < 4; i++)
    {
        if (im.valorimposto > tab[i].valorini && im.valorimposto <= tab[i].valorfim)
        {
            multa = im.valorimposto * tab[i].percentual * im.mesesatraso;
        }
    }
    return multa;
}

void mostraImoveis(struct IMOVEL imoveis[], int qtd)
{
    int i, j;
    struct IMOVEL aux;

    for (i = 0; i < qtd - 1; i++)
    {
        for (j = 0; j < qtd - 1; j++)
        {
            if (imoveis[j].mesesatraso < imoveis[j + 1].mesesatraso)
            {
                aux = imoveis[j];
                imoveis[j] = imoveis[j + 1];
                imoveis[j + 1] = aux;
            }
        }
    };
    printf("\nImoveis por ordem de atraso: \n");
    for (i = 0; i < qtd; i++)
    {
        printf("Imovel %d - Imposto %.2f - %d meses\n", imoveis[i].nrregistro, imoveis[i].valorimposto, imoveis[i].mesesatraso);
    }
}

int main()
{
    struct TABELAIMPOSTO tabela[4] = {
        {0.00, 1000.0, 0.05},
        {1000.01, 2000.00, 0.10},
        {2000.01, 5000.00, 0.20},
        {5000.01, 999999.99, 0.25}};
    struct IMOVEL imoveis[3];
    int i;
    float multa;

    for (i = 0; i < 3; i++)
    {
        printf("Imovel: %d\n", i + 1);
        printf("Numero: ");
        scanf("%d", &imoveis[i].nrregistro);
        printf("Valor do imposto: ");
        scanf("%f", &imoveis[i].valorimposto);
        printf("Meses de atraso: ");
        scanf("%d", &imoveis[i].mesesatraso);
    }

    for (i = 0; i < 3; i++)
    {
        multa = calcularMuta(imoveis[i], tabela);
        printf("Imovel %d - multa: %f\n", imoveis[i].nrregistro, multa);
    }

    mostraImoveis(imoveis, 3);
}
