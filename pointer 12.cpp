#include<stdio.h>                        //kullanici tarafindan oluþturulan 2 dizinin pointer yardimiyla birleþtirilip 3.bir dizi oluþturan program
#include<stdlib.h>

int main()
{
	int n,s;
	
	printf("1.dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	printf("2.dizinin eleman sayisini giriniz:");
	scanf("%d",&s);
	
	int dizi[n],i;
	int arr[s];
	
	int *p1,*p2;
	
	printf("1.dizinin elemanlari:\n");
	for(p1=dizi;p1<dizi+n;p1++)
	{
		printf("sayi %d: ",p1-dizi+1);
		scanf("%d",p1);
	}
	
	printf("2.dizinin elemanlari:\n");
	for(p2=arr;p2<arr+s;p2++)
	{
		printf("sayi %d: ",p2-arr+1);
		scanf("%d",p2);
	}
	
	printf("1.dizi: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(dizi+i));
	}
	printf("\n2.dizi: ");
	for(i=0;i<s;i++)
	{
		printf("%d ",*(arr+i));
	}
	
	for(p1=dizi+n,p2=arr;p2<arr+s;p1++,p2++)
	{
		*p1=*p2;
	}
	
	printf("\n\ndizilerin birlestirilmis hali: ");
	for(i=0;i<n+s;i++)
	{
		printf("%d ",*(dizi+i));
	}
	
	
}
