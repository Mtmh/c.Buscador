#include <stdio.h>

/*
 * Se tien una serie de numeros desordenados.
 * Realiza una funcion que determine si un numero existe o no.
 */

int existe(int n, int a[], int tam);


int main(void)
{
    int numeros[] = { 1, 10, -20, 500, 4000, 2, 23, 4, 4, 4, 11, 11, 2 };
    int tam = sizeof(numeros) / sizeof(int);

    if (existe(4, numeros, tam))
        printf("Si existen\n");
    else
        printf("No existe\n");

    return 0;
}

int existe(int n, int a[], int tam)
{
    int i;

    for (i = 0; i < tam; ++i)
        if (a[i] == n)
            return 1;

    return 0;
}
