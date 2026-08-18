#include <stdio.h>

int fSoma(int matriz[][12], int l)
{
    int soma = 0, c = 0;
    for (c = 0; c < 12; c++)
    {
        soma += matriz[l][c];
    }
    return soma;
}

int main()
{
    int mat[12][12];
    int l;
    int soma;
    FILE *arquivo;

    arquivo = fopen("matriz_12x12.txt", "r");
    for (int l = 0; l < 12; l++)
    {
        for (int c = 0; c < 12; c++)
        {
            fscanf(arquivo, "%i", &mat[l][c]);
        }
    }
    fclose(arquivo);

    printf("Informe a linha da matriz entre 1 e 12: \n");
    scanf("%i", &l);

    l--;

    soma = fSoma(mat, l);

    printf("Soma da linha: %i\n", soma);
}