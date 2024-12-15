#include <stdio.h>

int main( ){
	int x = 3;
	int *xPtr = &x;
	
	printf("In dia chi: \n");
	printf("\nCach 1: %d", &x);
	printf("\nCach 2: %d", xPtr);
	
	printf("\n\nIn gia tri: \n");
	printf("\nCach 1: %d", x);
	printf("\nCach 2: %d", *xPtr);
	
	return 0;
}
