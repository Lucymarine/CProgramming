#include <stdio.h> 

int main(){ 
	
	int myNum = 50+50;
	
	int sum1 = 100+50;
	int sum2 = sum1+250;
	int sum3 = sum2+sum2;
	
	printf("Degiskenlere gore\n 1-%d\n 2-%d \n 3-%d\n 4-%d \n \n \n ",myNum, sum1, sum2, sum3);

/* 
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x
*/ 

 /* 
 - && Returns true if both statements are true ( her iki ifade e�it ise true d�nd�r)
 - || Returns true if one of the statements is true ( ifadelerden birisi do�ru ise true d�nd�r)
 - ! Reverse the result, returns false if the result is true ( Sonucu Tersine �evirin, sonu� do�ru ise yanl�� d�nd�r�r)
 1*/ 
 // Bir veri t�r�n�n veya bir de�i�kenin bellek boyutu (bayt cinsinden) sizeofoperat�rle bulunabilir
 
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;
	 
 	printf("%lu \n ", sizeof(myInt));
 	printf("%lu \n ", sizeof(myFloat));
 	printf("%lu \n ", sizeof(myDouble));
 	printf("%lu \n ", sizeof(myChar));
 
	return 0;
}
