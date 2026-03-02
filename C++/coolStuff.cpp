#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    // Going to make a simple dynamically sized array based on user specifications
    
    int array_size;
    
    cin >> array_size;

    int *my_array;

    my_array = (int*) malloc(array_size*sizeof(int));

    for (int i =0; i<array_size+15; i++) {
        int x;
        cin >> x;
        *my_array = x;
        my_array ++;
    }

    return 0;
}