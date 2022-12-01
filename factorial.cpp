#include <iostream>
using namespace std;

long int func(long long int num) {
    long long int sum = 1;
    for (int i=1; i<=num; i++) {
        cout << i;
        sum *= i;
        cout<<" - "<<sum << endl;
    }
    return sum;
}

int main() {
    long long int num, num2;
    do {
        cout << "!?: "; cin >> num;
    } while (num <= 0);
    num2 = func(num);
    cout<<endl<<endl<<num<<"! = "<<num2<<endl;

    return 0;
}
