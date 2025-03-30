#include <stdio.h>
/*
Punteros
Para hablar de punteros tenemos que hablar primero de como
obtener la direccion en memoria de una variable

Ejemplo para obtener una direccion en memoria :
int a = 5
printf("%p", &a)

Un puntero es una variable cuyo valor es la direccion en memoria de otra variable
Los beneficios es que podemos acceder y modificar el valor de nuestra variable.


Veremos Aritmetica de punteros en el código.

Garbage value o valor basura, proviene de un espacio de memoria asignado a una variable
no inicializada. Este es el resultado de operaciones anteriores realizadas por otros programas
en la maquina. Lenguajes de programacion modernos no presentan este comportamiento.
*/
int main()
{
    int n[3] = {1, 2, 3};
    int *p1 = n;

    char c[3] = {'A', 'B', 'C'};
    char *p2 = c;

    for (int i = 0; i < 3; i++)
    {
        printf("Memory adress of c[%i] = %p\n", i, (p2 + i));
        printf("Value of c[%i] = %c\n\n", i, *(p2 + i));
    }

    printf("Segundo ejemplo: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Memory adress of n[%i] = %p\n", i, (p1 + i));
        printf("Value of n[%i] = %d\n\n", i, *(p1 + i));
    }
}