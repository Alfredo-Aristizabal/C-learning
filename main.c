#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

// ./a.exe 1> result.txt
int main()
{
    FILE *fptr;
    char chr;
    char buff[SIZE];

    fptr = fopen("./file-to-read.txt", "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Can not read the file");
        exit(EXIT_FAILURE);
    }

    fgets(buff, SIZE, fptr);
    printf("%s\n", buff);

    fptr = fopen("./file-to-read.txt", "r");

    while ((chr = fgetc(fptr)) != EOF)
    {
        printf("%c", chr);
    }
    fclose(fptr);
    exit(EXIT_SUCCESS);
}