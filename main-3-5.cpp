// main-3-5.cpp
#include <iostream>

// Function declaration
double sum_even(double array[], int n);

int main() {
    double array1[] = {1.5, 2.0, 3.5, 4.0, 5.5, 6.0};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    double array2[] = {10.0, 20.0, 30.0, 40.0};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    std::cout << "Sum of even positions in array1: " << sum_even(array1, size1) << std::endl;
    std::cout << "Sum of even positions in array2: " << sum_even(array2, size2) << std::endl;

    return 0;
}
