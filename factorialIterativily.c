#include <stdio.h>
#include <time.h>

unsigned long long factorial(int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    clock_t begin = clock();
    printf("%llu \n", factorial(10));

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time spend in iteration: %f seconds\n", time_spent);
    return 0;
}