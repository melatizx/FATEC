#include <stdio.h>

// Função para inicializar os ponteiros
void inicializar(int *x, int *y, int **px, int **py)
{
    *px = x;
    *py = y;
}

// Função para imprimir valores e endereços
void imprimirValores(int x, int y, int *px, int *py)
{
    printf("x = %d, y = %d\n", x, y);
    printf("*px = %d, *py = %d\n", *px, *py);
    printf("&px = %p, &py = %p\n", (void *)&px, (void *)&py);
}

// Função para testar px = py
void testarPxIgualPy(int *x, int *y, int **px, int **py)
{
    *px = *py; // px passa a apontar para y
    printf("\nDepois de px = py:\n");
    printf("x = %d\n", *x);
    printf("px = %p\n", (void *)*px);
    printf("*px = %d\n", **px);
    printf("y = %d\n", *y);
    printf("&y = %p\n", (void *)y);
    printf("py = %p\n", (void *)*py);
    printf("*py = %d\n", **py);
}

int main()
{
    int x = 2, y = 3;
    int *px, *py;

    inicializar(&x, &y, &px, &py);
    imprimirValores(x, y, px, py);
    testarPxIgualPy(&x, &y, &px, &py);

    return 0;
}
