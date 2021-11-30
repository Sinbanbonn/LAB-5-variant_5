#include <iostream>

using namespace std;


unsigned long long function1(unsigned long long k, unsigned long long n,
                             unsigned long long m) {
    if (n == 0) {
        return 1;
    }
    unsigned long long res = function1(k, n / 2, m);
    if (n % 2 == 0) {
        return (res * res) % m;
    }
    return (k * res * res) % m;
}

int main() {
    int num = 0;

    while (true) {
        unsigned long long k, n;
        int t;
        unsigned long long m = 1;
        cout << "Enter  0 0 0 , if you wanna exit! " << endl;
        cout << "Enter values k, n, t : ";
        cin >> k >> n >> t;
        if (k == 0 && n == 0 && t == 0) {
            break;
        }

        while (t < 1 || t > 9 || k <= 0 || n < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Try yet!" << endl ;
            cout << "Enter  0 0 0 , if you wanna exit! " << endl;
            cout << "Enter values k, n, t : ";
        }


        for (int i = 0; i < t; i++) {
            m *= 10;
        }

        k %= m;

        num++;

        cout << "Case #" << num << ": " << function1(k, n, m) << "\n";
    }

    return 0;
}