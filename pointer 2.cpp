#include<stdlib.h>       //pointer yard�m� ile 2 say�n�n yerini de�i�tirip ekrana bast�rma
#include<stdio.h>

void yerdegistir(int *p1,int *p2)
{
	int gecici;
	
	gecici=*p1;
	*p1=*p2;
	*p2=gecici;

	printf("\nsayi1:%d\tsayi2:%d",*p1,*p2);
}

int main()
{
	int s1,s2;
	
	printf("2 adet sayi giriniz:");
	scanf("%d %d",&s1,&s2);
	
	printf("sayi1:%d\tsayi2:%d",s1,s2);
	
	yerdegistir(&s1,&s2);
}
