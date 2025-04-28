#include <stdio.h>

int power_recursive(int base, int power)
{
    if (power == 0)
        return 1;

    return (base * power_recursive(base, power - 1));
}

int main()
{
    long int result = power_recursive(4, 4);
    printf("The result is %d", result);
    return 0;
}