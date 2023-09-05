#include<stdio.h>             //girilen karakter dizisindeki istenilen elemani silen program
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[100];
	char n;
	char *ptr;
	
	printf("karakter dizisi giriniz:");
	gets(arr);
	
	printf("silmek istediginiz karakteri giriniz:");
	scanf("%c",&n);
	
	for(ptr=arr;*ptr;ptr++)                          //for versiyon
	{
		if(*ptr==n)
		{
			strcpy(ptr,ptr+1);
		}
	}
	
/*	ptr=arr;
	while(*ptr)
	{
		if(*ptr==n)
		{                                                //while vers.
			strcpy(ptr,ptr+1);
		}
		else
		{
			ptr++;
		}
	}
*/	
	printf("son hali:%s",arr);
}
