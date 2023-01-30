#include<stdio.h>

int main()
{
	
	int i,j,k;
	float toplam,ort;
	float maks;
	int notlar[4][4] = {{67,76,55,0},{34,79,76,0},{56,68,57,0},{66,89,65,0}};
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			toplam = toplam + notlar[i][j];
		}
		ort = toplam / j;
		notlar[i][3] = ort;
		toplam = 0;
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ",notlar[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	if(notlar[0][3] > notlar[1][3] && notlar[0][3] > notlar[2][3] && notlar[0][3] > notlar[3][3])
	{
		printf("en buyuk ortalama: %d ",notlar[0][3]);
	}
	
	else if(notlar[1][3] > notlar[0][3] && notlar[1][3] > notlar[2][3] && notlar[1][3] > notlar[3][3])
	{
		printf("en buyuk ortalama: %d ",notlar[1][3]);
	}
	
	else if(notlar[2][3] > notlar[0][3] && notlar[2][3] > notlar[1][3] && notlar[2][3] > notlar[3][3])
	{
		printf("en buyuk ortalama: %d ",notlar[2][3]);
	}
	
	else
	{
		printf("en buyuk ortalama: %d ",notlar[3][3]);
	}
	
		
	
	
	
	
	
	return 0;
}
