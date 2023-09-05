#include<stdio.h>
#include<stdlib.h>                            //karakter dizisinin boyunu bulan program

int main()
{
	char arr[100];
	char *ptr;
	
	printf("metin giriniz:");
	gets(arr);
	
	for(ptr=arr;*ptr;ptr++)
	{
		
	}
	
	printf("%d karakterden olusmaktadir",ptr-arr);
	
	
}
