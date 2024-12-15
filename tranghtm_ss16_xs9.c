#include <stdio.h>

int add( int *arr , int n, int index, int num){
	for( int i = n; i>= index-1 ; i--){
		*(arr+i+1) = *(arr+i);
	}
	*(arr+index-1) = num;
}

int main( ){
	int arr[10] = { 23, 13, 555, 6, -7, 333, -9, 71, -9};
	int n = sizeof(arr) / sizeof(int);
	
	printf("\nTruoc add: ");
	for( int i = 0; i< n ; i++){
		printf("\t%d", arr[i] );
	}
	
	add(arr, 9, 2, 122);
	
	printf("\nSau add: ");
	for( int i = 0; i< n ; i++){
		printf("\t%d", arr[i] );
	}
	
	return 0;
}
