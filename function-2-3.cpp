// function-2-3.cpp
#include <iostream>

void two_five_nine(int array[], int n) {
    int count_2 = 0;
    int count_5 = 0;
    int count_9 = 0;

    for (int i = 0; i < n; ++i) {
        switch (array[i]) {
            case 2:
                count_2++;
                break;
            case 5:
                count_5++;
                break;
            case 9:
                count_9++;
                break;
            default:
                break;
        }
    }

    std::cout << "2:" << count_2 << ";5:" << count_5 << ";9:" << count_9 << ";" << std::endl;
}
