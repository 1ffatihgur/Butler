#include<stdio.h>


void deger_al(int dizim[][4], int size)
{
	int i,j;
	
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d. satir %d. sutunu giriniz: ",i+1,j+1);
			scanf("%d",&dizim[i][j]);
		}
	}
}

void deger_bastir(int dizim[][4], int  size)
{
	
	int i,j;
	
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",dizim[i][j]);
		}
		printf("\n");
	}
	
}

void ort_bastir(int dizim[][4], int size)
{
	
	int i,j;
	int toplam=0;
	int ort=0;
	
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<3; j++)
		{
			toplam = toplam + dizim[i][j];
		}
		ort = toplam / j;
		dizim[i][3] = ort;
		toplam = 0;
	}
		
}

void son_hali(int dizim[][4], int size)
{
	
	int i,j;
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ",dizim[i][j]);
		}
		printf("\n");
	}
	
}





int main()
{
	
	int sayilar[4][4];
	
	deger_al(sayilar,4);	
	
	deger_bastir(sayilar,4);
	
	ort_bastir(sayilar,4);
	
	printf("\n");
	
	son_hali(sayilar,4);
	
	
	
	
	
	return 0;
}
