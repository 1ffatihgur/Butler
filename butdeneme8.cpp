#include<stdio.h>
#include<string.h>

void terscevir(char array[])
{
	
	int uzunluk = strlen(array);
	int i;
	
	for(i=uzunluk; i>=0; i--)
	{
		printf("%c",array[i]);
	}
	
	
}


int main()
{
	
	char dizimiz[50];
	
	printf("bir seyler yazin: ");
	gets(dizimiz);
	
	terscevir(dizimiz);
	
	printf("\nters cevrilmis hali: %s",strrev(dizimiz));
	
	
	return 0;
}
