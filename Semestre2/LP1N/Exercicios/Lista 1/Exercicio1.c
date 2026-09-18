#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Informe o valor numero %i: \n", i + 1);
        scanf("%i", &vetorA[i]);
    }

    for (i = 10; i > 0; i--)
    {
        vetorB[10 - i] = vetorA[i];
    }

    printf("Vetor B: ");

    for (i = 0; i < 10; i++)
    {
        printf("[%i] ", vetorB[i]);
    }
}