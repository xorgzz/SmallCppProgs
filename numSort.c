#include <iostream>
#include <stdio.h>

int numms[10];

void swap(int a, int b){
	int swap_space;
	swap_space = numms[a];
	numms[a] = numms[b];
	numms[b] = swap_space;
}

int main(){
	printf("\nenter numbers: ");
	scanf("%d %d %d", &numms[0], &numms[1], &numms[2]);
	
	if(numms[0] > numms[1]){
		swap(0, 1);
	}

	if(numms[0] > numms[2]){
		swap(0, 2);
	}

	if(numms[1] > numms[2]){
		swap(1, 2);
	}

	printf("%d %d %d\n\n", numms[0], numms[1], numms[2]);
	return 0;
}