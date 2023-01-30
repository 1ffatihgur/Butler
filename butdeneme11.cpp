#include<stdio.h>

int dizi_carp(int dizim[], int size)
{
	
	int i;
	int carp=1;
	
	for(i=0; i<size; i++)
	{
		carp = carp * dizim[i];
	}
	
	return carp;
	
	
}



int main()
{
	
	int sayilar[5] = {2,3,4,5,6};
	
	printf("dizi elemanlarinin carpimi: %d",dizi_carp(sayilar,5));
	
	
	
	
	
	return 0;
}
