#include <stdio.h>
#include <iostream>

int myabs(int i) {
    if (i < 0) {return -i;}
    else {return i;}
}

float myabs(float f) {
    if (f < 0.0) {return -f;}
    else {return f;}
}

int main() {
    return 0;
}