#include<stdio.h>                   //pointer kullanarak 2 sayýyý toplama
#include<stdlib.h>

int main()
{
	int s1,s2;
	int*p1,*p2;
	
	p1=&s1;
	p2=&s2;
	
	printf("2 adet sayi giriniz:\n");
	scanf("%d %d",&s1,&s2);
	
	printf("\ntoplam= %d",*p1+*p2);
	
	
}
