#include <stdio.h>
#include <stdlib.h>
#define EXIT_FAILURE 1

int main()
{
    int n = 5;
    int *ptr = maalloc(n * sizeof *ptr);

    if (ptr == NULL)
    {
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++)
    {
        ptr[i] = i;
        printf("%d", ptr[i]);
    }
    printf("\n");

    ptr = realloc(ptr, 2 * n * sizeof *ptr);

    if (ptr == NULL)
    {
        return EXIT_FAILURE;
    }
}