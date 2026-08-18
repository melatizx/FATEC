#include <stdio.h>

// int fSoma(int matriz[][], int l)
// {
//     int soma = 0, c = 0;
//     for (c = 0; c < 12; c++)
//     {
//         soma = soma + matriz[l][c];
//     }
//     return soma;
// }

int main()
{
    int mat[12][12];
    int l, c;
    // int soma = fSoma(mat, l);
    FILE *arquivo;

    printf("Informe a linha da matriz entre 1 e 12: \n");
    scanf("%i", &l);

    arquivo = fopen("matriz_12x12.txt", "r");
    for (c = 0; c < 12; c++)
    {
        fscanf(arquivo, "%i", &mat[l][c]);
        printf(mat[l][c]);
    }
    fclose(arquivo);
}