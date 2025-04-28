#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr = malloc(3 * sizeof *ptr);
    *(ptr + 0) = 'H'; // ptr[0] = 'H'
    ptr[1] = 'E';
    ptr[2] = 'L';

    printf("First Letter: %c\n Second Letter: %c\n Third letter %c\n", ptr[0], ptr[1], ptr[2]);
    free(ptr);
    return 0;
}