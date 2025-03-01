// function-2-5.cpp

bool is_descending(int array[], int n) {
    if (n < 1) {
        return false;
    }

    for (int i = 1; i < n; ++i) {
        if (array[i] > array[i - 1]) {
            return false;
        }
    }

    return true;
}
