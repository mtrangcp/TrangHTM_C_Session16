#include <stdio.h>

int sort( int *arr , int n){
	for( int j = 0; j< n-1 ; j++){
		for ( int i = 0 ; i< n-1-j; i++){
			if (*(arr + i) > *(arr + i + 1)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
            }
		}
	}
}

int main( ){
	int arr[] = { 23, 13, 555, 6, -7, 333, -9, 71, 0};
	int n = sizeof(arr) / sizeof(int);
	
	printf("\nTruoc sort: ");
	for( int i = 0; i< n ; i++){
		printf("\t%d", arr[i] );
	}
	
	sort(arr, n);
	
	printf("\nSau sort: ");
	for( int i = 0; i< n ; i++){
		printf("\t%d", arr[i] );
	}
	
	return 0;
}
