/* --- Include Statements --- */
#include <stdio.h>
#include <stdlib.h>

/* --- Struct Definition --- */
typedef struct {
    char *name;
    int age;
} Person;

/* --- Pototype Functions --- */
Person *create_person(const char *name, int age);
void destroy_person(Person *p);

/* --- Main Function --- */
int main() {
    Person *testPerson = create_person("Jamie", 19);
    destroy_person(testPerson);
}

/* --- Other Functions --- */
Person *create_person(const char *name, int age) {
    Person *p = malloc(sizeof(Person));
    p->name = malloc(sizeof(*name));
    (p->name) = name;
    p->age = age;
    return p;
}

void destroy_person(Person *p) {
    free(p->name); 
    free(p);
}