/* --- Include Statements --- */
#include <stdio.h>
#include <stdlib.h>

/* --- Function Prototypes --- */
int sum_array(int *arr, int size);
void add_to_all(int *arr, int size, int x);

/* --- Main Function --- */
int main() {
    int data[5] = {1,2,3,4,5};

    printf("Sum = %d\n", sum_array(data, 5));

    add_to_all(data, 5, 10);

    printf("After adding 10:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

/* --- Other Functions --- */
int sum_array(int *arr, int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum += *arr;
        arr ++;
    }
    return sum;
}

void add_to_all(int *arr, int size, int x) {
    for (int i=0; i<size; i++) {
        *arr += x;
        arr ++;
    }
}