#include <stdio.h>
 
int main () {
	
	// belirli bir koþul saðlandýðý sürece döngü true
	
	printf("While dongusu \n ");
	int a=0; 
	
	while(a <5) {
		printf("%d \n ", a);
		a++;
	}
	
	printf("\n ---------------------------------------------------------------- \n ");
	printf("Do-While Dongusu \n  ");
	// do-while döngüsü 
	/* 
	- bu döngü  koþulun doðru olup olmadýðýna bakmadan do döngüsünü bir kez çalýþtýracak
	- ve koþul doðru olduðu sürece döngü tekrar dönecektir.
	*/ 
	int b=0; 
	
	do {
		printf("%d \n ", b); 
		b++;
	}while(b<5);
	
	
	printf("\n ---------------------------------------------------------------- \n ");
	printf("For Dongusu \n  ");
	
	for (int i = 0; i<=5; i++) {
		printf("%d \n",i );
	}
	
	return 0;
}
