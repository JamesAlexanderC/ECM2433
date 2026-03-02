#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

// V1
/*
int main() {
    int x = 1234;
    printf("%f\n", x);
    cout << x << endl;
    return 0;
}
*/
// V2

int main() {
    double x = 123.456;
    cout << x << '\n';
    cout << scientific << x << '\n';
    cout << fixed << x << '\n';
    cout << setprecision(2) << x << '\n';
    cout << setprecision(5) << x << '\n';

    int n = 42;
    cout << setw(6) << n << '\n';
    cout << hex << n << '\n';
    cout << dec << n << endl;
    return 0;
}