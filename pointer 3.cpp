#include<stdio.h>               //kullanicidan alinan dizinin eleman sayýsý ile pointer kullanrak diziyi bastýrma
#include<stdlib.h>
#include<time.h>

int main()
{
	int n;
	
	srand(time(NULL));
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];
	int *ptr;
	
	ptr=dizi;
	
	for(int i=0;i<n;i++)
	{
		ptr[i] =rand()%100; 
        printf("%d ",ptr[i]);
	}
	
	
	
}

