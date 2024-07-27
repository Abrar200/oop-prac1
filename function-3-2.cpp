// function-3-2.cpp
#include <algorithm> // For std::sort

int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {
        return 0;
    }

    std::sort(array, array + n); // Sort the array

    return array[n / 2]; // Return the middle element
}
