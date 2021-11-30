#include <iostream>
#include "library.h"
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows : " ;
    rows = takeInt(1, INT16_MAX);
    cout << "Enter the number of columns : ";
    columns = takeInt(1, INT16_MAX);
    auto *XXX = new double[columns];
    auto *YYY = new double[rows];
    auto **ZZZ = new double* [rows];
    for (int i = 0; i < rows; i++) {
        ZZZ[i] = new double[columns];
    }
    cout << "Enter elements of X array :  " << endl ;
    enter(XXX, columns);
    cout << "Enter elements of Y  array :  " << endl ;
    enter(YYY, rows);

    cout << "Array X : " << endl ;
    print1(XXX ,columns ) ;
    cout << "======================" << endl ;
    cout << "Array Y : " << endl ;
    print1(YYY , rows);
    cout << "======================" << endl ;

    filling(XXX ,YYY , ZZZ , columns , rows) ;
    cout <<"Array Z : " << endl ;
    print(ZZZ , columns , rows) ;
    cout << "======================" << endl ;
    MAx( ZZZ , columns ,  rows) ;
    delete[] XXX;
    delete[] YYY;
    for (int i = 0; i < rows; i++) {
        delete[] ZZZ[i];
    }
    delete[] ZZZ;


    return 0;
}

