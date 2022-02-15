#include <stdio.h> 

int main() {
	
	printf("Break komutu For ile \n ");
	
	for(int i = 0; i <10; i++){
		if(i == 4) {
			break;	 // i degeri 4 olduðunda donguyu bitirir.
		}
		printf(" %d \n ", i);
	}
	
	printf("Continue komutu For ile \n ");
	
	for(int a = 0; a <10; a++){
		if(a == 4) {
			continue;	 // i degeri 4 olduðunda atlayýp 5 den devam eder ve döngü bitene kadar devam eder.
		}
		printf(" %d \n ", a);
	}
	
	
	printf("Break komutu while ile \n ");
	
	int b=0;
	
	while(b<10) {
		if(b==4) {
			break;
		}
		printf("%d \n ", b);
		b++;
	}
	
	
	printf("Continue  komutu while ile \n ");
	int c=0; 
	
	while(c <10) {
		c++;
		if(c==4){
			continue;
		}
		printf("%d \n", c);
	}
	
	return 0;
}
