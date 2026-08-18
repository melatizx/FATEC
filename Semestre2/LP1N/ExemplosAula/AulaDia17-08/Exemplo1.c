#include <stdio.h>

int fSoma(int vetor[])
{
    int i, soma = 0;
    for (i = 0; i < 10; i++)
    {
        soma = soma + vetor[i];
    }

    return soma;
}

int main()
{
    int vet[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int soma = fSoma(vet);
    printf("Soma do vetor: %i", soma);
}