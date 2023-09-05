#include<stdio.h>                   //pointer kullanýlarak dizi elemanlarinin yerlerinin degitirilmesi
#include<stdlib.h>                   //ilk hali: 1 2 3     son hali: 3 2 1

int main()
{
	int n,i;
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	int *ptr;
	
	printf("\ndizinin elemanlarini giriniz:\n");
	for(ptr=dizi;ptr<dizi+n;ptr++)
	{
		scanf("%d",ptr);
	}
	
	printf("\ndizinin ilk hali:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(dizi+i));
	}
	
	int *ptr2;
	int gecici;
	
	for(ptr=dizi,ptr2=dizi+n-1;ptr<ptr2;ptr++,ptr2--)
	{
		gecici=*ptr;
		*ptr=*ptr2;
		*ptr2=gecici;
	}
	
	printf("\n\ndizinin son hali:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(dizi+i));
	}
}
