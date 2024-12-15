#include <stdio.h>

int sum( int *a , int *b ){
	return (*a) + (*b) ;
}

int main( ){
	int x = 3, y = 7, s ;
	s = sum( &x, &y );
	printf("Tong: %d", s );
	return 0;
}
