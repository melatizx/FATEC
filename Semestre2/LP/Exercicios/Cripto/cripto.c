#include <stdio.h>

void cripto(char *origem, char *destino)
{
    char *ctrl1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    char *ctrl2 = "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210";
    char *p1, *p2;

    while (*origem != '\0')
    {
        p1 = ctrl1;
        p2 = ctrl2;

        while (*p1 != '\0' && *p1 != *origem)
        {
            p1++;
            p2++;
        }

        if (*p1 == *origem)
        {
            *destino = *p2;
        }
        else
        {
            p1 = ctrl1;
            p2 = ctrl2;
            while (*p2 != '\0' && *p2 != *origem)
            {
                p1++;
                p2++;
            }

            if (*p2 == *origem)
            {
                *destino = *p1;
            }
            else
            {
                *destino = *origem;
            }
        }

        origem++;
        destino++;
    }

    *destino = '\0';
}

int main()
{
    char texto1[9], texto2[9], texto3[9];

    printf("Informe um texto de ate 8 caracteres:");
    scanf("%[^\n]", texto1);

    cripto(texto1, texto2);
    cripto(texto2, texto3);

    printf("O texto criptografado eh: \n%s\n e descriptografado eh: \n%s\n", texto2, texto3);

    return 0;
}
