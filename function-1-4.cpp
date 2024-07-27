// function-1-4.cpp

int sum_two_arrays(int array[], int secondarray[], int n) {
    if (n < 1) {
        return 0;
    }

    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum += array[i] + secondarray[i];
    }

    return total_sum;
}
