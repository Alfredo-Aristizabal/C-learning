#include <stdio.h>
#include <string.h>

/*
Manipulacion de strings

En c un string puede ser considerado como un array unidemnsional
que termina en null caracter.

el null caracter representa la finalizacion del string. Es la representacion
del numero 0 como string

\0 = secuencia de escape.


*/

void modify_string(char *c)
{
    c[0] = 'X';
};
int main()
{
    /*Diferentes formas de declarar un string*/

    // Primera forma
    char my_str[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
    printf("The length of my_str is: %li \n", strlen(my_str));
    printf("My string my_str is : %s \n", my_str);
    printf("My string my_str is : %p \n");

    // Segunda forma
    char my_str2[6];
    *my_str2 = 'H';
    my_str2[1] = 'E';
    my_str2[2] = 'L';
    *(my_str2 + 3) = 'L';
    *(my_str2 + 4) = 'O';
    *(my_str2 + 5) = '\0';
    printf("My string my_str2 is %s \n", my_str2);

    // tercer forma
    char my_str3[] = "HELLO";
    char *p;
    p = my_str3;
    my_str3[4] = 'A';
    p[0] = 'W';
    *(p + 2) = 'P';
    printf("My string my_str3 is %s \n", my_str3);
    modify_string(my_str3);
    printf("My modified string my_str3 is %s \n", my_str3);
}