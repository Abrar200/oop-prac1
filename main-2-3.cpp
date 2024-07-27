// main-2-3.cpp
#include <iostream>

// Function declaration
void two_five_nine(int array[], int n);

int main() {
    int array[] = {2, 9, 5, 9, 2, 5, 9, 9, 2, 1, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);

    two_five_nine(array, size);

    return 0;
}
