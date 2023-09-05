#include<stdlib.h>                     //karakter dizisini pointer yardımıyla baska bir diziye kopyalayıp ekrana bastırma
#include<stdio.h>

int main()
{
	char arr[15]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
	char *p1;
	char *p2;
	char cpyarr[15];
	int i;
		
	p2=cpyarr;
	p1=arr;
	
	for(p1=arr;p1<arr+15;p1++)
	{
		*p2=*p1;
		p2++;
	}
	
	printf("orijinal dizi: ");
	
	for(i=0;i<15;i++)
	{
		printf("%c ",*(arr+i));
	}
	
	printf("\nkopyalanmis dizi: ");
	
	for(i=0;i<15;i++)
	{
		printf("%c ",*(cpyarr+i));
	}
	
}
