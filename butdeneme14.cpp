#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	
	srand(time(NULL));
	int sayilar[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		sayilar[i] = 5+rand()%25;
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d ",sayilar[i]);
	}
	
	
	
	return 0;
}
