#include <iostream>

using namespace std;

int main() {
	int h, base;
	cout << "height?: "; cin >> h;
	const char c[2] = {' ', 'X'};

	for ( int i=0; i<h-1; i++ ) {
		if ( i==0 ) {
			for ( int j=0; j<h; j++ ) cout << c[0];
			cout << c[1];
		}
		else {
			for ( int j=0; j<h-i; j++ ) cout << c[0];
			cout << "X";
			if (i == 1 ) cout << c[0] << c[1];
			else {
				for ( int j=0; j<i*2-1; j++ ) cout << c[0];
				cout << c[1];
			}
		}
		cout << endl;
	}
	cout << " ";
	for ( int i=0; i<h*2-1; i++ ) cout << c[1];
	cout << endl;

	return 0;
}
