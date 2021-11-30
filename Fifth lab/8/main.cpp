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

int function1(int n, int sum) {
    for (int i = 1; i < n + 1; i++) {
        int max = 1;

        for (int j = 0; j < i + 1; j++) {
            if (j % 2 != 0) {
                if (i % j == 0) {
                    max = j;
                }

            }
        }
        sum += max;
    }

    return sum;
}

void exit1(int n) {
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {

        cout << "Enter value №" << i + 1 << " : ";
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout << function1(arr[i] , 0) << endl ;
    }
    delete[] arr;
}

int main() {
    int n;
    cout << "Enter value n : ";
    n = takeInt(1, INT16_MAX);
    exit1(n) ;
    return 0 ;
}
