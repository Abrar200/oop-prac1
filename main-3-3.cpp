#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    std::unordered_map<int, int> frequency;
    
    // Calculate the frequency of each element
    for (int i = 0; i < n; ++i) {
        frequency[array[i]]++;
    }
    
    // Calculate the weighted average
    double weighted_sum = 0.0;
    for (int i = 0; i < n; ++i) {
        weighted_sum += array[i] * (frequency[array[i]] / static_cast<double>(n));
    }

    return weighted_sum;
}

int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);
    double result = weighted_average(array, n);
    std::cout << "Weighted Average: " << result << std::endl;

    return 0;
}
