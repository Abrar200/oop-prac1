// main-1-5.cpp
#include <iostream>

// Function declaration
int count_evens(int number);

int main() {
    int number = 10;

    int result = count_evens(number);

    std::cout << "The number of even numbers between 1 and " << number << " is: " << result << std::endl;

    return 0;
}
