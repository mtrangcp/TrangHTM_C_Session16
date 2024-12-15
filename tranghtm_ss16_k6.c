#include <stdio.h>

int search( int *arr , int n , int num){
	for( int i = 0; i< n ; i++){
		if ( *(arr +i) == num ){
			return i+1;
		}
	}
}

int main( ){
	int arr[] = { 23, 13, 55, 66, 77, -9, 71, 333};
	int n = sizeof(arr) / sizeof(int);
	
	int i = search(arr, n, 66 );
	
	printf("\nVi tri cua ptu can tim: %d", i);
	
	return 0;
}
