#include <stdio.h>
#include <time.h>

unsigned long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    clock_t begin = clock();
    printf("%llu \n", factorial(10));

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time spend in recursion: %f seconds\n", time_spent);
}