#include <stdio.h>

int main() { 

	int sayi = 0, toplam =0, i;
	
	printf("Lutfen sayi giriniz : ");
	scanf("%d",&sayi);
	
	for(i = 0; i <= sayi; i++){
		toplam += i;
	}
	printf("Girdiginiz sayi %d , bu sayiya kadar olan toplam = %d ",sayi , toplam);
	
}
