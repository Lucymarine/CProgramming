#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	srand(time(NULL));
	int sayi; 
	
	sayi= rand(); // sayi= rand() %2 ; // *2 *3 +5 gibi 
	
	printf("%d ", sayi);
}
