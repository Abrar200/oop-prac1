// function-3-1.cpp

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }

    // Check if the array is a palindrome
    for (int i = 0; i < n / 2; ++i) {
        if (array[i] != array[n - 1 - i]) {
            return false;
        }
    }

    // Check if the first half is in ascending order
    for (int i = 1; i <= n / 2; ++i) {
        if (array[i] < array[i - 1]) {
            return false;
        }
    }

    return true;
}
