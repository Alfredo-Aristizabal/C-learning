#include "utilities.h"

char *reverse_str(char *s)
{
    if (!s)
        return s;

    size_t length = _strlen(s) - 1;
    size_t i = 0;
    size_t j = length;

    char aux;
    for (; i <= length / 2; i++, j--)
    {
        aux = s[j];
        s[j] = s[i];
        s[i] = aux;
    }
    return s;
}
