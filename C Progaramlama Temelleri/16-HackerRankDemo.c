#include <stdio.h>

int main() {
	
	int sonuc= 0, y=2;
	
	for(int i=1; i<=10; i++){
		sonuc=y*i;
		printf("%d x %d = %d \n",y,i,sonuc);
	}
}
