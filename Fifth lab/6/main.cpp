#include <iostream>

using namespace std;

unsigned int takeInt(unsigned int min, unsigned int max) {
    bool isInCorrect;
    unsigned int num;
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

unsigned int function1(unsigned int i,unsigned int result) {

    if (i % 10 > 0) {
        result = i % 10;
    } else {
        if (i == 0) {
            result = 0;
        } else {
            return function1(i / 10, result);
        }
    }
    return result;
}

 int main() {

        cout << "Enter value p : ";
        unsigned int p;
        p = takeInt(0, 4294967000);
        cout << "Enter value  q : ";
        unsigned int q;
        q = takeInt(p + 1, 4294967000);


        unsigned int sum = 0;
        for (unsigned int i = p; i < q + 1; i++) {
            sum += function1(i, 0);

        }
        cout << sum << endl;

    return 0;
}
