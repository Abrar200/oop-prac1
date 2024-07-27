// main-2-1.cpp
#include <iostream>

// Function declaration
int min_element(int array[], int n);

int main() {
    int array[] = {22, 3, 45, 0, 18, -7, 14};
    int size = sizeof(array) / sizeof(array[0]);

    int result = min_element(array, size);

    std::cout << "The minimum element in the array is: " << result << std::endl;

    return 0;
}
