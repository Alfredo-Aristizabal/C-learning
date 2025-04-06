#include "utilities.h"

char *concat_str(char *s1, char *s2)
{
    char *newS;
    size_t length = 0;

    for (; *(s1 + length) != '\0'; length++)
    {
        *(newS + length) = *(s1 + length);
    }

    for (size_t i = 0; *(s2 + i) != '\0'; i++, length++)
    {
        *(newS + length) = *(s2 + i);
    }
    *(newS + length) = '\0';

    return newS;
}
