#include <stdio.h>

void print_string_recursively(char *s)
{
    if (!*s) // condicion de parada
    {
        putchar('\n');
        return;
    }
    putchar(*s);
    print_string_recursively(s + 1); // llamada recursiva
}
int main()
{
    print_string_recursively("Hello");
    return 0;
}