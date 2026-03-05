/* --- Include Statements --- */
#include <iostream>

/* --- Function Prototypes --- */
void rotate3(int *a, int *b, int *c);
void reverse_blocks(int *arr, int n, int block, int **ends);

/* --- Main Function --- */
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    rotate3(&arr[0], &arr[2], &arr[4]);
    for (int i=0; i<6; i++) {
        printf("%d",arr[i]);
    }
    return 0;
}

/* --- Other Functions --- */
void rotate3(int *a, int *b, int *c) {
    int temp_a = *a, temp_b = *b, temp_c = *c;
    *a = temp_c;
    *b = temp_a;
    *c = temp_b;
}

void reverse_blocks(int *arr, int n, int block, int **ends) {
    
}