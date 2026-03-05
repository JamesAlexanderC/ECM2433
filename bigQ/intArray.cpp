/* --- Include Statements --- */
#include <stdio.h>
#include <iostream>

/* --- Using Statements --- */
using namespace std;

/* --- Array Prototype --- */
class IntArray {
private:
    int *data;
    int size;

public:
    IntArray(int size);
    ~IntArray();
    IntArray(const IntArray &other);
    IntArray& operator=(const IntArray &other);

    int get(int index) const;
    void set(int index, int value);
    int getSize() const;
};

/* --- Define Class Methods --- */
IntArray::IntArray(int size) {
    // define size and data
    this->size = size;
    this->data = (int *) malloc(size*sizeof(int));
    
    // create temp pointer to iterate through array and initialise each value to 0
    int *temp_pointer = this->data;
    for(int i=0; i<size; i++) {
        *temp_pointer = 0;
        temp_pointer++;
    }
}

IntArray::~IntArray() {
    free(this->data);
}

IntArray::IntArray(const IntArray &other) {
    this->size = other.size;
    this->data = (int *) malloc(size*sizeof(int));

    int *temp_pointer = this->data;
    int *temp_pointer_2 = other.data;

    for(int i=0; i<size; i++) {
        *temp_pointer = *temp_pointer_2;
        temp_pointer++;
        temp_pointer_2++;
    }
}

IntArray& IntArray::operator=(const IntArray &other) {
    this->size = other.size;
    free(this->data);
    this->data = (int *) malloc(this->size*sizeof(int));
    int *temp_pointer = this->data;
    int *temp_pointer_2 = other.data;
    for (int i=0; i<size; i++) {
        *temp_pointer = *temp_pointer_2;
        temp_pointer++; temp_pointer_2++;
    }
    return *this;
}

int IntArray::get(int index) const {
    int *p = this->data + index;
    return *p;
}

void IntArray::set(int index, int value) {
    int *p = this->data + index;
    *p = value;
}

int IntArray::getSize() const {
    return this->size;
}

/* --- Main Function --- */
int main() {
    IntArray a(3);
    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);

    IntArray b = a;

    b.set(1, 99);

    cout << a.get(1) << endl;
    cout << b.get(1) << endl;

    IntArray c(1);
    c = a;

    cout << c.get(2) << endl;

    return 0;
}