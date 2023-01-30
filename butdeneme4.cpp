#include<stdio.h>
#include<string.h>

int main()
{
	
	int uzunluk=0;
	char dizi[40];	
	
	printf("Bir seyler yaziniz: ");
	
	gets(dizi);
	
	uzunluk = strlen(dizi);
	
	printf("Dizinin uzunlugu: %d",uzunluk);

	printf("\nTersten yazilisi: %s",strrev(dizi));
	
	return 0;
}
