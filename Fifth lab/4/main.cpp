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

void zero(int **A, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (A[i][j] == 0) {
                cout << " Element №" << i << j << " is zero" << endl;
            }
        }
    }
}

void change(int **A , int**B, int rows, int columns) {
    int i = 0;
    int j = 0;
    for (int m = rows -1  ; m > i - 1 ; m--) {
        for ( int n = columns -1 ; n > j - 1 ; n--  ) {
            B[rows - 1 - m][ columns - 1 - n] = A[m][n] ;
        }
        cout << endl ;

        }

    }


    int main() {
        int rows, columns;
        cout << " Enter value of rows : ";
        rows = takeInt(1, INT16_MAX);
        cout << "Enter value of columns : ";
        columns = takeInt(1, INT16_MAX);
        auto **A = new int *[rows];
        auto **B = new int *[rows];
        for (int i = 0; i < rows; i++) {
            A[i] = new int[columns];
            B[i] = new int[columns];
        }
        Enter(A, rows, columns);
        cout << endl ;
        cout << "Initial matrix : " << endl ;
        Print(A , rows , columns) ;
        zero(A, rows, columns);
        change(A ,B ,  rows , columns) ;
        cout << " The final matrix : " << endl;
        Print(B, rows, columns);
        for (int i = 0; i < rows; i++) {
            delete[] A[i];
        }
        delete[] A;
        for (int i = 0; i < rows; i++) {
            delete[] B[i];
        }
        delete[] B;
        return 0;
    }
