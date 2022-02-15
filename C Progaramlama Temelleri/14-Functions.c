#include <stdio.h> 

void myFunction() {
	printf("This myFunction void \n");
}

void myCustomers(char name[]) {
	printf("Hello %s \n ", name);
	
}

void myCustomer(char name[], int age) {
	printf("Hello %s you are %d years old. \n ", name, age);
	
}

int main() { 
	printf ("Main Fonksiyonu icerisi .... \n "); 
	
	myCustomers("Cafer");
	myCustomers("Omer");
	myCustomers("Kubra");
	printf ("*--------------------------------------------------------------*  \n "); 
	myCustomer("cafer", 28);
	myCustomer("Omer", 31);
	myCustomer("Kubra", 34);
	
	return 0; 
}


