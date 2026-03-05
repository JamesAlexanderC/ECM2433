/* --- Include Statements --- */
#include <stdio.h>
#include <iostream>

/* --- Class Definition -- */
class Person {
private:
    char *name;
    int age;

public:
    
Person(const char *name, int age) {
        // Find size of name
        int name_size = 0;
        const char *temp_name = name;
        while (true) {
            if (*temp_name == '\0') {break;}
            name_size ++;
            temp_name ++;
        }
        
        // Initialise name to correct size including null terminator
        this->name = (char *) malloc((name_size+1)*sizeof(char));

        // Now create an entirely seperate copy (deep copy init)
        char *this_pointer = this->name;
        const char *name_pointer = name;
        for(int i=0; i<name_size; i++) {
            *(this_pointer) = *name_pointer;
            this_pointer ++; name_pointer ++;
        }

        // Now do integer
        this->age = age;

    }
    
    ~Person() {
        free(this->name);
    }
    
    void print() {
        printf("Name: %s, Age: %d", this->name, this->age);
    }
};

/* --- Main Function --- */
int main() {
    Person p("Alice", 21);
    p.print();
    return 0;
}