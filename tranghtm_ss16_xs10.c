#include <stdio.h>

int del( int *arr , int n, int index){
	for( int i = index-1; i < n ; i++){
		*(arr+i) = *(arr+i+1);
	}
}

int main( ){
	int arr[10] = { 23, 13, 555, 6, -7, 333, -9, 71, -99, 88};
	int n = sizeof(arr) / sizeof(int);
	
	printf("\nTruoc xoa: ");
	for( int i = 0; i< n ; i++){
		printf("\t%d", arr[i] );
	}
	
	del(arr, 9, 2);
	
	printf("\nSau xoa: ");
	for( int i = 0; i< n-1 ; i++){
		printf("\t%d", arr[i] );
	}
	
	return 0;
}
