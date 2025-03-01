// function-2-4.cpp

bool is_ascending(int array[], int n) {
    if (n < 1) {
        return false;
    }

    for (int i = 1; i < n; ++i) {
        if (array[i] < array[i - 1]) {
            return false;
        }
    }

    return true;
}
