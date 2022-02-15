#include <stdio.h> 

int main () {
	 
	 printf("Int Data Type 4 byte \n"); 
	 printf("Float Data Type 4 byte \n"); 
	 printf("Double Data Type 8 byte \n"); 
	 printf("Char Data Type 1 byte \n"); 
	 
	 printf("Her veri turu icin bicim belirteci farklidir. yuzde isareti konularak \n");
	 printf(" int d \n float f \n double lf \n char c \n string s \n");
	 	
	 	// bir degeri sabit kýlmak icin cost degerini kullanmamýz gerekir.
	 	
	printf("\n Degerin sabit ve degistirilebilir olmasýný istemiyor isek const degerini kullanmamiz gerek \n ");
	
	const int myNum=15;
	// örnek teskil etmesi icin 1 saat 60 dakika 
	
	const int minutesPerHour = 60;
	const int BIRTHYEAR= 1994;
	
	printf("benim degerim %d",myNum);
	printf("\n Bir Saat %d dakikadir.",minutesPerHour);
	printf("\n Dogum tarihim %d dir", BIRTHYEAR);
	
	
	 return 0;
}
