#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *codificador(char mensagem[], int k)
{
    int i = 0;
    char *msgCripto = (char *)malloc(100 * sizeof(char));

    for (i = 0; i < strlen(mensagem); i++)
    {
        if (isalpha(mensagem[i]))
        {
            int codLetra1 = (int)mensagem[i];
            int codLetra2 = codLetra1 + k;

            if (mensagem[i] >= 'A' && mensagem[i] <= 'Z')
            {
                if (codLetra2 > 'Z')
                {
                    codLetra2 -= 26;
                }
            }
            else if (mensagem[i] >= 'a' && mensagem[i] <= 'z')
            {
                if (codLetra2 > 'z')
                {
                    codLetra2 -= 26;
                }
            }

            msgCripto[i] = (char)codLetra2;
        }
        else
        {
            msgCripto[i] = mensagem[i];
        }
    }

    msgCripto[i] = '\0';

    return msgCripto;
}

int main()
{
    char mensagem[100];
    int k;

    printf("Informe a mensagem: ");
    scanf("%99[^\n]", mensagem);

    printf("Informe o valor de K: ");
    scanf("%i", &k);

    printf("Mensagem criptografada: %s", codificador(mensagem, k));
}