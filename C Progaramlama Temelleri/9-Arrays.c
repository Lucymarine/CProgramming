#include <stdio.h>

int main () { 
	printf("Arrays - Diziler \n");
	
	int myNumbers[] = {25, 50, 75, 100}; 
	
	printf("myNumbers adli dize nin ilk elenani ' %d ' \n \n ", myNumbers[0]);
	
	printf("myNumbers[0] indexini degistirelim \n"); 
	
	myNumbers[0] = 33;
	
	printf("%d \n", myNumbers[0]);
	
	printf("*----------------------------------------------------------------------------* \n "); 
	
	printf("Dizinin icinde for ile arama yapalim \n"); 
	
	int i; 
	
	for(i=0; i<4; i++) {
		printf("%d \n", myNumbers[i]);
	}
	 
	return 0;
}
