#include <stdio.h>
#include <stdlib.h>

/* Function prototype */
int factorial(int N);

int main(int argc, char *argv[])
{
    int N = (int) atoi(argv[1]);

    int result = factorial(N);

    printf("%u! = %u\n", N, result);

    return 0;
}