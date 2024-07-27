// main-2-4.cpp
#include <iostream>

// Function declaration
bool is_ascending(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {5, 3, 4, 1, 2};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    std::cout << "Array 1 is ascending: " << (is_ascending(array1, size1) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is ascending: " << (is_ascending(array2, size2) ? "true" : "false") << std::endl;

    return 0;
}
