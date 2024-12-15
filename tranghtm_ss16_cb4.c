#include <stdio.h>

void show( int *arr , int n ){
	for( int i = 0; i< n ; i++){
		printf("\t%d", *(arr +i));
	}
}

int main( ){
	int arr[] = { 23, 13, 55, 66, 77, -9, 71, 333};
	int n = sizeof(arr) / sizeof(int);
	show(arr, n);
	
	return 0;
}
