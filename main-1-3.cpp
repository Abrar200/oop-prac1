// main-1-3.cpp
#include <iostream>

// Function declaration
int num_count(int array[], int n, int number);

int main() {
    int array[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int number = 2;

    int result = num_count(array, size, number);

    std::cout << "The number " << number << " appears " << result << " times in the array." << std::endl;

    return 0;
}
