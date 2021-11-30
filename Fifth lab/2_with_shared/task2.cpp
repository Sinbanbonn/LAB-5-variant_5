#include <iostream>
#include "library.h"
using namespace std;

int main() {
    int n;
    int max;
    cout << "Enter size of your array : ";
    n = takeInt(1, INT16_MAX);
    auto *arr = new int[n];
    Enter(arr, n);
    print(arr, n);
    cout << endl;
    max = maximum(arr, n - 1, 0, INT16_MIN);
    cout << "max = " << max;

    delete[] arr;


    return 0;
}

