#include <stdio.h>

int main(){
	
	float pi=3.1415;
	int yariCap; 
	float alan, cevre; 
	
	printf("Yaricapi Giriniz : "); 
	scanf("%d",&yariCap);
	alan = pi*(float)(yariCap*yariCap);
	cevre = 2*pi*yariCap;
	
	printf("Dairenin Cevresi = %f \n ", cevre); 
	printf ("Dairenin alani  = %f ", alan);
	
	
	return 0;
}
