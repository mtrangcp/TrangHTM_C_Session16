#include <stdio.h>

int update( int *arr , int n, int index ){
	*(arr+index-1) = n;
}

int main( ){
	int arr[] = { 23, 13, 55, 66, 77, -9, 71, 333};
	int n = sizeof(arr) / sizeof(int);
	
	printf("\nTruoc update: ");
	for( int i = 0; i< n ; i++){
		printf("\t%d", arr[i] );
	}
	
	update(arr, 111, 1);
	
	printf("\nSau update: ");
	for( int i = 0; i< n ; i++){
		printf("\t%d", arr[i] );
	}
	
	return 0;
}
