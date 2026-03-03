/* --- Include Statements --- */

#include <stdio.h>
#include <stdlib.h>

/* --- Function Prototypes --- */

int printInteger(int i);
void updateInteger(int *i);

/* --- Main Function --- */

int main() {
    int a = 42;
    int b = 0;

    printf("in main function a = %d, b = %d\n", a, b);
    b = printInteger(a);
    printf("in main function a = %d, b = %d\n", a, b);

    printf("in main function a = %d\n", a);
    updateInteger(&a);
    printf("in main function a = %d\n", a);

    return 0;
}

/* -- Other Functions --- */

int printInteger(int i) {
    printf("in printInteger i = %d\n", i);
    return i + 3;
}

void updateInteger(int *i) {
    printf("in updateInteger dereferenced pointer = %d\n", *i);
    *i += 3;
}
