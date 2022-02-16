#include <stdio.h>

void straightLine(long,long,int); 
void decline(long,long, int);
void yillarToplami(long, long, int);
int tarih;

void main() 
{
	long malinDegeri, sigortaDegeri;
	int tahminiYil;
	short yeniveriSeti=1, yeniYontem=1;
	short secim;
	
	printf("icinde bulunan yili gir : ");
	scanf("%d", &tarih);
	
	while(yeniveriSeti==1) {
		printf("\n malin degerini giriniz :");
		scanf("%ld",&malinDegeri);
		printf("\n malin sigorta degerini giriniz : "); 
		scanf("%ld", &sigortaDegeri);
		printf("\n Tahmini deger kaybi yilini girin : ");
		scanf("%d", &tahminiYil);
		
		yeniYontem =1;
		
		while(yeniYontem == 1) {
			printf("\n straight line (1)	decline (2)		Yillar toplami (3) \n");
			printf("Yontemi secin : ");
			scanf("%d", &secim);
			
			switch(secim) {
				case 1:
					straightLine(malinDegeri, sigortaDegeri, tahminiYil);
					break;
				case 2:
					decline(malinDegeri, sigortaDegeri, tahminiYil);
					break;
				case 3:
					yillarToplami(malinDegeri, sigortaDegeri, tahminiYil);
					break;
			}
			printf("\n diger bir methhod kullanin (1/0)");
			scanf("%d", &yeniYontem);
		}
		printf("yeni veri seti ? (1/0)");
		scanf("%d", &yeniveriSeti);
	}
}

void straightLine(long deger, long sigorta, int yil) 
{
	long amortisman, yilSonuDeger;
	amortisman = (deger-sigorta)/yil;
	int i;
	for(i=0; i<yil; i++){
		yilSonuDeger=deger-amortisman;
		printf("\n %d Yil sonu deger = %ld \t amortisman : %ld \n",tarih+i , yilSonuDeger, amortisman);
		deger=yilSonuDeger;
	}
}

void decline (long deger, long sigorta, int yil)
{
	long amortisman, yilSonuDeger;
	int i;
	for(i = 0; i<yil; i++){
		amortisman = (deger/yil);
		yilSonuDeger=deger-amortisman;
		printf("%d yil sonu deger = %ld \t amortisman = %ld \n",tarih+i, yilSonuDeger, amortisman);
		deger=yilSonuDeger;
	}
}

void yillarToplami(long deger, long sigorta, int yil)
{
	long amortisman, yilSonuDeger;
	int yilToplam = 0;
	int i;
	for(i = 1; i<yil; i++){
		yilToplam+=i;
	}
	for(i=0; i<yil; i++) {
		amortisman=((float)(yil-i)/yilToplam)*(deger-sigorta);
		yilSonuDeger-=amortisman;
		printf("%d yil sonu deger = %ld \t amortisman = %ld \n ", tarih+i, yilSonuDeger, amortisman);
	}
}
