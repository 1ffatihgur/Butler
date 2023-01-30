#include<stdio.h>
#include<string.h>


void deger_al(int dizimm[][5], int size)
{
	
	int i,j;
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d. satir ve %d. sutunu giriniz: ",i+1,j+1);
			scanf("%d",&dizimm[i][j]);
		}
	}
	
}

void deger_bastir(int dizimm[][5], int size)
{
	
	int i,j;
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d",dizimm[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	
	int a;
	
	printf("satir giriniz: ");
	scanf("%d",&a);
	
	int sayilar[a][5];
	
	deger_al(sayilar,a);
	
	deger_bastir(sayilar,a);
	
	
	
	return 0;
}
