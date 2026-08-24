#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVogal(char palavra[])
{
    int c = 0;
    int letras = strlen(palavra);
    int numVogais = 0;

    while (c < letras)
    {
        if (tolower(palavra[c]) == 'a' || tolower(palavra[c]) == 'e' || tolower(palavra[c]) == 'i' || tolower(palavra[c]) == 'o' || tolower(palavra[c]) == 'u')
        {
            numVogais++;
        }
        c++;
    }

    return numVogais;
}

char *substituirVogal(char palavra[], char letra)
{
    int c = 0;
    int letras = strlen(palavra);

    while (c < letras)
    {
        if (tolower(palavra[c]) == 'a' || tolower(palavra[c]) == 'e' || tolower(palavra[c]) == 'i' || tolower(palavra[c]) == 'o' || tolower(palavra[c]) == 'u')
        {
            palavra[c] = letra;
        }
        c++;
    }

    return palavra;
}

int main()
{
    char palavra[100];
    char letra;

    printf("Informe uma palavra: \n");
    scanf("%99s", palavra);

    printf("Quantidade de vogais: %i", contarVogal(palavra));

    printf("\nInforme a letra para substituir as vogais: \n");
    scanf(" %c", &letra);

    printf("Palavra modificada: %s", substituirVogal(palavra, letra));
}