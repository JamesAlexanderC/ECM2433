int factorial(int N)
{
    int result = 1;

    for (int i = 1; i <= N; i++)
    {
        result *= i;
    }

    return result;
}