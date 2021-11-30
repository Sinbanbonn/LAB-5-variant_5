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
            cout << "Enter value " <<i + 1 << j+1 << " : " ;
           A[i][j] = takeInt(INT16_MIN , INT16_MAX);
        }
    }
}


int counter(int n, int **A, int rows, int columns) {

    if (rows >= columns) {
        for (int i = 0; i < columns; i++) {
            if (A[i][i] != 0) {
            if (A[i][i] % 2 == 0) {
                n++;

            }}

        }
    } else {
        for (int i = 0; i < rows; i++) {
            if (A[i][i] != 0) {
                if (A[i][i] % 2 == 0) {
                    n++;

                }

            }
        }
    }
    return n;
}

void counter2(int **A, int *arr, int rows, int columns) {
    int m = -1;
    if (rows >= columns) {
        for (int i = 0; i < rows; i++) {
            if(A[i][i]){
            if (A[i][i] % 2 == 0) {
                m++;
                arr[m] = A[i][i];

            }
            }

        }
    } else {
        for (int i = 0; i < columns; i++) {
            if (A[i][i] != 0) {
                if (A[i][i] % 2 == 0) {
                    m++;
                    arr[m] = A[i][i];
                }

            }
        }

    }
}

int main() {
    int rows, columns, n = 0;
    cout << "Enter value of rows : ";
     rows = takeInt(0 , INT16_MAX);
    cout << "Enter value of columns : ";
columns = takeInt( 0 , INT16_MAX);

    auto **A = new int *[rows];
    for (int i = 0; i < rows; i++) {
        A[i] = new int[columns];
    }
    Enter(A, rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"=======================" << endl ;

    n = counter(n, A, rows, columns);
   if(n!= 0 ) {
       int *arr = new int[n];
       counter2(A, arr, rows, columns);
       for (int i = 0; i < n; i++) {
           cout << arr[i] << " ";
       }
       cout << endl;
       int product = 1;
       for (int i = 0; i < n; i++) {
           product *= arr[i];

       }
       cout << "Product : " << product;
       delete[] arr;
   }
   else{
       cout << " The program doesn't have a product!" ;
   }

    for (int i = 0; i < rows; i++) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}
