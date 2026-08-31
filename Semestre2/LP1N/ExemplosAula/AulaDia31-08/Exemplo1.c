#include <stdio.h>

void substring(char origem[], char destino[], int posini, int posfinal)
{
    int i, j = 0;
    for (i = posini; i <= posfinal; i++, j++)
    {
        destino[j] = origem[i];
    }
    destino[j] = '\0';
}

int main()
{
    char vetor1[15] = "programacao";
    char vetor2[15];

    substring(vetor1, vetor2, 7, 10);
    printf("\n%s", vetor2);
}