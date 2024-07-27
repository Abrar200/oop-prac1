// main-1-2.cpp
#include <iostream>

// Function declaration
double array_mean(int array[], int n);

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    double result = array_mean(array, size);

    std::cout << "The average of the array elements is: " << result << std::endl;

    return 0;
}
