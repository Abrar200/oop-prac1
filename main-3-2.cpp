// main-3-2.cpp
#include <iostream>

// Function declaration
int median_array(int array[], int n);

int main() {
    int array1[] = {3, 5, 2, 1, 4};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {3, 5, 2, 1, 4, 6};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int array3[] = {1, 3, 3, 6, 7, 8, 9};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    std::cout << "Median of array1: " << median_array(array1, size1) << std::endl;
    std::cout << "Median of array2: " << median_array(array2, size2) << std::endl;
    std::cout << "Median of array3: " << median_array(array3, size3) << std::endl;

    return 0;
}
