#include <stdio.h>
#include <string.h>

void separarNome(char nome[], char primeiro[], char ultimo[])
{
    char *temp;

    temp = strtok(nome, " ");
    strcpy(primeiro, temp);

    while ((temp = strtok(NULL, " ")) != NULL)
    {
        strcpy(ultimo, temp);
    }
}

int main()
{
    char nome[100];
    char primeiro[50];
    char ultimo[50];

    printf("Informe o nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    separarNome(nome, primeiro, ultimo);

    printf("\n%s, %s", ultimo, primeiro);
}