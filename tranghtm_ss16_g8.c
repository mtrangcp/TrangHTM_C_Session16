#include <stdio.h>
#include <string.h>

int main( ){
	char inputString[20], reverseString[20] ;
	int j = 0;
	
	printf("\n Nhap chuoi: ");
	fgets(inputString, 20, stdin );
	int len = strlen(inputString);
	
	char *ptr = inputString;
	
	for (int i = len-1 ; i >=0 ; i--){
		reverseString[j++] = *(ptr+i) ;
	}
	
	printf("\n Chuoi input: ");
	for( int i = 0; i< len ; i++){
		printf("\t%c", inputString[i] );
	}
	
	printf("\n Chuoi reverse: ");
	for( int i = 0; i< len ; i++){
		printf("\t%c", reverseString[i] );
	}
	
	return 0;
}
