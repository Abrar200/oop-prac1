// main-1-4.cpp
#include <iostream>

// Function declaration
int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int size = sizeof(array1) / sizeof(array1[0]);

    int result = sum_two_arrays(array1, array2, size);

    std::cout << "The sum of elements in both arrays is: " << result << std::endl;

    return 0;
}
