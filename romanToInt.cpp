#include <stdio.h>
#include <string.h>

int exchange(char romanDigit) {
	switch (romanDigit) {
		case 'I': 	
			return 1;
		case 'V':	
			return 5;
		case 'X':	
			return 10;
		case 'L':	
			return 50;
		case 'C':	
			return 100;
		case 'D':	
			return 500;
		case 'M':	
			return 1000;
		default:	
			return 0;
    }
}

int romanToINT(const char input[]) {
	int sum = 0;
	int size = strlen(input);

	for(int i=0; i < size; i++) {
		if(i < size-1 && exchange(input[i]) < exchange(input[i+1])) {
			sum -= exchange(input[i]);
		}
		else {
			sum += exchange(input[i]);
		}
	}

	return sum;
}

int main(int argc, char *argv[]) {
	printf("%s is %d\n", argv[1], romanToINT(argv[1]));
}