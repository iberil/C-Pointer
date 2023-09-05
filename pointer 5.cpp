#include<stdio.h>                    //girilen sayinin n elemanli dizide kaçýnci sýrada olduðunu bulan program
#include<stdlib.h>
#include<time.h>

void ara(int *ptr,int n,int sayi)
{
	int bulundu=0;
	
	for(int i=0;i<n;i++,ptr++)
	{
		if(*ptr==sayi)
		{
			printf("%d sayisi %d.siraddir",sayi,i+1);
			bulundu=1;
		}
	}
	
	if(!bulundu)
	{
		printf("sayi dizide bulunmamaktadir");
	}	
}

int main()
{
	int n,sayi;
	
	srand(time(NULL));
	
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	int dizi[n];

	for(int i=0;i<n;i++)
	{
		dizi[i]= rand()%100;
		printf("%d ",dizi[i]);
	}
	
	printf("aradiginiz elemani giriniz:");
	scanf("%d",&sayi);
	
	
	ara(dizi,n,sayi);
}
