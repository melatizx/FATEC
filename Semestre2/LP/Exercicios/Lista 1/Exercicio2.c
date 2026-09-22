#include <stdio.h>

int main()
{
    int vetorA[20], vetorB[20], vetorC[20], i;

    for (i = 0; i < 20; i++)
    {
        printf("Informe o valor %io do vetor A e B: \n", i + 1);
        scanf("%d %d", &vetorA[i], &vetorB[i]);
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("Soma dos valores: ");

    for (i = 0; i < 20; i++)
    {
        printf("[%i] ", vetorC[i]);
    }
}