#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    char prod, tamProd;
    float preco, qtdProd, precoFinal, valorVenda;

    printf("Qual o tipo de produto?\n");
    printf("A - Areia, B - Brita, P - Pedrita, S - Saibro\n");
    scanf(" %c", &prod);

    printf("Qual o tamanho do produto?\n");
    printf("F - Fina, M - Média, G - Grossa\n");
    scanf(" %c", &tamProd);

    printf("Quantidade comprada em metros cubicos:\n");
    scanf("%f", &qtdProd);

    if (prod == 'a' || prod == 'A')
    {
        preco = 34;
    }
    else if (prod == 'b' || prod == 'B')
    {
        preco = 30;
    }
    else if (prod == 'p' || prod == 'P')
    {
        preco = 42;
    }
    else if (prod == 's' || prod == 'S')
    {
        preco = 60;
    }

    if (tamProd == 'f' || tamProd == 'F')
    {
        precoFinal = preco;
    }
    else if (tamProd == 'm' || tamProd == 'M')
    {
        precoFinal = preco * 1.15;
    }
    else if (tamProd == 'g' || tamProd == 'G')
    {
        precoFinal = preco * 1.25;
    }

    valorVenda = precoFinal * qtdProd;

    if (valorVenda < 750)
    {
        valorVenda = valorVenda + 45;
    }

    printf("Valores venda:\n");
    printf("Preço do produto: %.2f\n", precoFinal);
    printf("Valor venda: %.2f", valorVenda);

    return 0;
}
