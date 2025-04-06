#include "utilities.h"

size_t _strlen(const char *c)
{
    size_t length;
    for (length = 0; *(c + length) != '\0'; length++)
        ;
    return length;
}