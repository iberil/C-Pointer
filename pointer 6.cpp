#include<stdio.h>                     //kullanici tarafindan girilen 10 adet sayidan oluþturulmus dizinin mak ve min degerini bulan program
#include<stdlib.h>

void maksi(int *ptr)
{
	int maks=*ptr;
	
	for(int i=0;i<10;i++)
	{
		if(*(ptr+i)>maks)
		{
			maks=*(ptr+i);
		}
	}
	
	printf("\nmaks degeri: %d",maks);	
}
void mini(int *ptr)
{
	int min=*ptr;
	
	for(int i=0;i<10;i++)
	{
		if(*(ptr+i)<min)
		{
			min=*(ptr+i);
		}
	}
	
	printf("\nmaks degeri: %d",min);	
}

int main()
{
	int dizi[10];
	int *ptr;
	ptr=dizi;
	
	printf("dizinin elemanlarini giriniz:");
	
	for(int i=0;i<10;i++)
	{
		scanf("%d",dizi+i);
	}
	
	printf("\n");
	
	for(int i=0;i<10;i++)
	{
		printf("%d ",dizi[i]);
		ptr++;
	}
	
	maksi(dizi);
	mini(dizi);
}
