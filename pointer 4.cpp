#include<stdio.h>                           //oluþturduðumuz dizi elemanlarýný pointer yardýmý ile yeni diziye kopyalayýp ekrana bastýrma
#include<stdlib.h>
#include<time.h>

void bastir(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}

int main()
{
	int n;
	
	printf("dizinin eleman sayisini girini:");
	scanf("%d",&n);
	
	int dizi[n];
	int *ptr;
	ptr=dizi;
	
	int *dest;
	int dest_dizi[n];
	dest=dest_dizi;
	
	printf("elemanlari giriniz:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	
	printf("\n");
	
	printf("kopyalanmadan onceki dizi:\n");
	bastir(dizi,n);
	
	printf("\n***\n");
	
	printf("kopyalandiktan sonraki yeni dizi:\n");
	
	for(int i=0;i<n;i++)
	{
		*dest=*ptr;
		dest++;
		ptr++;
	}
	bastir(dest_dizi,n);
}
