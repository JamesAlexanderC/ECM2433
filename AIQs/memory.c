/* --- Include Statements --- */
#include <stdio.h>
#include <stdlib.h>

/* --- Function Prototypes --- */
int *reverse_copy(int arr[], int size);

/* --- Main Function --- */
int main() {
    int data[4] = {10,20,30,40};

    int *rev = reverse_copy(data, 4);

    if (rev == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", rev[i]); 
    }
    printf("\n");

    free(rev);
    return 0;
}

/* --- Other Functions --- */
int *reverse_copy(int arr[], int size) {
    int *new_arr = (int*) malloc(size*sizeof(int));
    for (int i=0; i<size; i++) {
        new_arr[i] = arr[size - i - 1];
    }
    return new_arr;
}