#include<stdio.h>

void maksbul(int dizim[], int size)
{
	
	int i;
	int maks=0;
	
	for(i=0; i<size; i++)
	{
		if(dizim[i] > maks)
		{
			maks = dizim[i];
		}
		else
		{
			continue;
		}
	}
	
	printf("en buyuk sayi: %d",maks);
	
	
}



int main()
{
	
	int i;
	int sayilar[5];
	
	for(i=0; i<5; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d ",sayilar[i]);
	}
	
	maksbul(sayilar,5);
	
	
	return 0;
}
