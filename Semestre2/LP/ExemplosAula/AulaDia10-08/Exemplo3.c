#include <stdio.h>

int main()
{
    double valor = 1000;
    int cont = 0;

    while (cont < 1000 * 10)
    {
        valor -= 0.1;
        cont++;
    }

    printf("\nValor: %f %d\n", valor, cont);
}