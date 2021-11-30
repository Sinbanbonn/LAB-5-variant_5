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

void Enter(int **A, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter value №" << i + 1 << j + 1 << ": ";
            A[i][j] = takeInt(INT16_MIN, INT16_MAX);
        }
    }

}
void Print(int **A, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

}

int counter(int **A, int rows, int columns) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < columns; j += 2)
            if (A[i][j] % 2 != 0) {
                count++;

            }
    }
    return count;
}

void parity(int **A, int rows, int columns) {
    int n = counter(A, rows, columns);
    auto *M = new int[n];
     int  r = 0;
    int sum = 0 ;
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < columns; j += 2)
            if (A[i][j] % 2 != 0) {
                M[r] = A[i][j];
                sum += M[r] ;
                r++;

            }
    }

    for (int i = 0; i < n; i++) {
        cout << M[i] << " ";
    }
    cout << endl ;

    cout << "Average of values : " << (float)sum / (float)n  ;

    delete[] M;
}

int main() {
    int rows;
    int columns;
    cout <<" Enter value of rows : " ;
    rows = takeInt(1, INT16_MAX);
    cout << "Enter value of columns : " ;
    columns = takeInt(1, INT16_MAX);

    auto **arr = new int *[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }
    Enter(arr, rows, columns);
    cout << "Initial matrix : " << endl ;
    Print(arr , rows , columns) ;
    cout << "New array : " << endl ;
    parity(arr, rows, columns);
    cout << endl;
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
