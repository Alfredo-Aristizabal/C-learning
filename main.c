#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        int *ptr = malloc(1024);
        *ptr = 5;
        printf("Value is %d\n", *ptr);
        free(ptr);
    }
    return 0;
}