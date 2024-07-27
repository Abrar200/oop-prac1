// main-3-4.cpp
#include <iostream>

// Function declaration
void print_pass_fail(char grade);

int main() {
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int num_grades = sizeof(grades) / sizeof(grades[0]);

    for (int i = 0; i < num_grades; ++i) {
        std::cout << "Grade " << grades[i] << ": ";
        print_pass_fail(grades[i]);
    }

    return 0;
}
