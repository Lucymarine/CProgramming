#include <stdio.h>
 
int main () {
	
	// belirli bir ko�ul sa�land��� s�rece d�ng� true
	
	printf("While dongusu \n ");
	int a=0; 
	
	while(a <5) {
		printf("%d \n ", a);
		a++;
	}
	
	printf("\n ---------------------------------------------------------------- \n ");
	printf("Do-While Dongusu \n  ");
	// do-while d�ng�s� 
	/* 
	- bu d�ng�  ko�ulun do�ru olup olmad���na bakmadan do d�ng�s�n� bir kez �al��t�racak
	- ve ko�ul do�ru oldu�u s�rece d�ng� tekrar d�necektir.
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
