// main-1-1.cpp
#include <iostream>

// Declare the function to be used
int array_sum(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int result = array_sum(array, size);

    std::cout << "The sum of the array elements is: " << result << std::endl;

    return 0;
}
