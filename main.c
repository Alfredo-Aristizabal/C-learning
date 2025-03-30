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
    int a = 3;
    int *p = &a;
    printf("The adress of a is %p ", &a);
    printf("\nThe adress of a  from p is %p ", p);
    printf("\nThe value of a from p %i", *p); // 3
    p++;
    printf("\nThe value of the variable pointed is %i", *p);
    printf("\nThe value of p %p", p);
}