int factorial(int N);

double eapprox(int n) {
    if (n==0) {return 0;}
    int sum = 1;
    for (int i = 1; i <= n-1; i++) {
        sum += ( 1 / factorial(i) );
    }
    return sum;
}