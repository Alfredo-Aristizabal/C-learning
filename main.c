#include <stdio.h>
#include <string.h>
// commands line

int main(int argc, char **argv)
{
    printf("The number of passed arguments is %d\n", argc);

    while (argc--)
    {
        printf("Index [%d] Value %s\n", argc, argv[argc]);
        printf("Memory Adress [%d] %p\n", argc, (void *)*(argv + argc));

        for (size_t i = 0; i <= strlen(argv[argc]); i++)
        {
            printf("Character is:  %c\n", argv[argc][i]);
            printf("Memory Adress is %p", &argv[argc][i]);
        }
        printf("\n\n");
    }
}