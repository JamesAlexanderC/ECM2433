/* --- Include Statements */

#include <stdio.h>
#include <stdlib.h>

/* --- Defining Stack Struct --- */

typedef struct Stack {
    int size;
    char *stack;
} STACK;

/* --- stack Functions --- */

STACK *new_stack(char data) {
    STACK *new_stack = malloc(sizeof(STACK));
    new_stack->stack = malloc(10*sizeof(char));
    *(new_stack->stack) = data;
    new_stack->stack ++;
    new_stack->size = 1;
    return new_stack;
}

/*
STACK *new_stack() {
    STACK *new_stack = malloc(10*sizeof(char));
    new_stack->size = 0;
    return new_stack;
}
*/

void push_to_stack(STACK *stack, char data) {
    *(stack->stack) = data;
    stack->stack ++;
    stack->size ++;
}

char pop_from_stack(STACK *stack) {
    stack->stack --;
    stack->size --;
    return *(stack->stack);
}

void print_stack(STACK *stack) {
    char *virt_pointer = stack->stack;
    for (int i = 0; i <= stack->size; i++) {
        printf("%c", *virt_pointer);
        virt_pointer --;
    }
    printf("\n");

}

/* --- Main Function --- */

int main() {
    STACK *test_stack = new_stack('A');

    push_to_stack(test_stack, 'A');

    push_to_stack(test_stack, 'B');

    print_stack(test_stack);

    pop_from_stack(test_stack);

    pop_from_stack(test_stack);

    pop_from_stack(test_stack);

    print_stack(test_stack);


    return 0;
}