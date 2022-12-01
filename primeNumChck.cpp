#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num, counter=0;
    cout << "liczba: "; cin >> num;
    for (int i=1; i<=sqrt(num); i++) {
        cout << num << "/" << i;
        if (num%i==0) {
            cout << " = " << "int";
            counter++;
        }
        if (counter > 1) {
            cout << endl << "not prime" << endl;
            return 0;
        }
        cout << endl;
    }
    cout <<"prime"<<endl;
    return 0;
}
// 2147483647
