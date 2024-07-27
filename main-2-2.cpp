// main-2-2.cpp
#include <iostream>

// Function declaration
int max_element(int array[], int n);

int main() {
    int array[] = {22, 3, 45, 67, 18, -7, 14};
    int size = sizeof(array) / sizeof(array[0]);

    int result = max_element(array, size);

    std::cout << "The maximum element in the array is: " << result << std::endl;

    return 0;
}
