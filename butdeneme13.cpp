#include<stdio.h>
#include<string.h>


int main()
{
	
	char array[] = "Seni Seviyorum";
	char array1[] = "naber";
	char array2[] = " kanka";
	
	
	int uzunluk = 0;
	
	uzunluk = strlen(array);
	
	printf("ismin uzunlugu %d",uzunluk);
	
	printf("\ncumlenin tersten okunusu: %s",strrev(array));	
	
	printf("\n%s ",strcat(array1,array2));
	
	
	
	return 0;
}
