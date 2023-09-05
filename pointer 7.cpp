#include<stdlib.h>                     //pointer  yardimiyla faktoriyel hesabi yapan program
#include<stdio.h>

int faktoriyel(int *ptr)
{
	int sonuc=1;
	int i;
	
	for(i=*ptr;i>0;i--,(*ptr)--)
	{
		sonuc *=(*ptr);
	}
	
	return sonuc;
}

int main()
{
	int n,ilk;
		
	printf("faktoriyelini bulmak istediginiz sayiyi giriniz:");
	scanf("%d",&n);
	
	ilk=n;
	
	printf("%d!=%d",ilk,faktoriyel(&n));
}
