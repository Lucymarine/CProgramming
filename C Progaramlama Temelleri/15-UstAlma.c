#include <stdio.h>

// 1+x/1 !+x2/2 !+...+x ( n-1 ) / ( n - 1) ! seri toplami hesaplanir.

// fonksiyonlarin prototipleri tanýmlanir.

long ustAl(int,int);
long faktoriyel(int);

int main() {
	
	int x, terimsayisi;
	float seriToplam=0.0;
	
	// serideki degiskenin degeri ve terim sayisi alinir.
	
	printf("seri degiskeninin ( x ) degeri ni girin : ");
	scanf("%d" , &x);
	printf("Serinin terim sayisini girin : "); 
	scanf("%d", &terimsayisi);
	
	// serinin toplami hesaplanir. 
	
	for( int i = 0; i<=(terimsayisi-1); i++){
		seriToplam +=ustAl(x,i) / faktoriyel(i);
	}
		
		// sonuc ekrana yazdirilir.. 
	printf("Serinin toplami : %f \n ", seriToplam);
	
	return 0; 
}

long ustAl(int taban, int ust){
	// fonksiyonun locak degiskeni tanimlanir. 
	long sonuc =1;
	// taban ve üst degiskenlere baðli ust alma islemi yapilir.
	if(ust!=0)
	{
		for(int i =1; i<=ust; i++)
		{
			sonuc *=taban;
		}
			
	}
	// sonuc degiskenin deðeri , ustAL fonsiyonunun cagirildiði yere gönderilir.
	return sonuc;
}

long faktoriyel (int sayi) {
	// fonksiyonun locak degiskeni tanýmlanir. 
	long sonuc=1;
	// sayi degiskenine bagli faktoriyel hesaplanir..
	if(sayi!=0)
	{
		for(int i = sayi; i>=1; i--)
		{
			sonuc *=i;
		}	
	}
	// sonuc degiskenin degeri , faktoriyel fonksiyonun cagirildiði yere gönderir.
	return sonuc;
}
