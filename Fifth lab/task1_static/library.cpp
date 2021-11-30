#include "library.h"
#include <iostream>
using namespace std ;
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
    return num; }

void enter(double *XXX, int i) {
    for (int g = 0; g < i; g++) {
        cout << "  Enter element №" << g + 1  << " : ";
        cin >> XXX[g];
    }

}
void filling(double* XXX , double* YYY , double** ZZZ , int columns , int rows){
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < columns ; j++){
            ZZZ[i][j] = XXX[j] * YYY[i] ;
        }
    }

}
void print1(double* XXX , int n ){
    for( int i = 0 ;i < n ; i++)
    {
        cout << XXX[i] << " " ;
    }
    cout << endl ;

}
void print(double** XXX , int columns , int rows){
    for(int i = 0 ; i < rows ; i++){
        for( int j = 0 ; j < columns ; j++){
            cout << XXX[i][j] << " " ;
        }
        cout << endl ;
    }
}
double MAx(double** ZZZ , int columns , int rows){
    double max = INT16_MIN ;
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j  <columns ; j++){
            if ( ZZZ[i][j] >= max){
                max = ZZZ[i][j] ;
            }
        }
    }
    cout << "Maximum of array Z = " <<  max ;
    return max ;
}
