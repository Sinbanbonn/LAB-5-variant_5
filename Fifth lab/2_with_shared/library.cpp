#include "library.h"

#include <iostream>

using namespace std;
int takeInt(int min, int max) {
    bool isInCorrect;
    int num;
    do {
        isInCorrect = false;
        cin >> num;
        if (!cin.good()) {
            isInCorrect = true;
            cout << "Incorrect data, try again!" << endl;
            cin.clear();
            while (cin.get() != '\n');
        }
        if (cin.good() && (num < min || num > max)) {
            isInCorrect = true;
            cout << "Incorrect value, try again!" << endl;
        }
    } while (isInCorrect);
    return num;
}
void Enter(int *A, int n) {

    for (int i = 0; i < n; i++) {
        cout << "Enter value №" << i + 1 << " : ";
        A[i] = takeInt(INT16_MIN, INT16_MAX);
    }
}

void print(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int maximum(int *A, int n, int i, int max) {

    if (A[n] >= A[i]) {
        if (A[n] > max) {
            max = A[n];
        }
    } else {
        if (A[i] > max) max = A[i];
    }
    if (n >= i) {
        return maximum(A, n - 1, i + 1, max);
    }

    return max;
}

