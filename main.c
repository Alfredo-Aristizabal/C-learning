#include "utilities.h"

int main()
{
    char *s1 = NULL;
    char s2[] = "Awesome World";
    char s3[] = "You'll never walk alone";
    // printf("Length of 'house' is %li\n", _strlen("House"));
    // printf("Length of 'Awesome World' is %li\n", _strlen("Awesome World"));
    // printf("Length of 'You'll never walk alone' is %li\n", _strlen("You'll never walk alone"));

    printf("Reversed string: %s\n", reverse_str(s1));
    printf("Reversed string: %s\n", reverse_str(s2));
    printf("Reversed string: %s\n", reverse_str(s3));
}