// main-2-5.cpp
#include <iostream>

// Function declaration
bool is_descending(int array[], int n);

int main() {
    int array1[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {1, 3, 2, 4, 5};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    std::cout << "Array 1 is descending: " << (is_descending(array1, size1) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is descending: " << (is_descending(array2, size2) ? "true" : "false") << std::endl;

    return 0;
}
