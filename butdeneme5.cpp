#include<stdio.h>

int main()
{
	
	int i,j,sayi;
	int toplam =0;
	
	int no[10] = {2,1,1,0,2,1,3,0,0,2};
	
	for(i=0; i<10; i++)
	{
		toplam = toplam + no[i];
	}
	
	printf("Toplam: %d\n",toplam);
	
	int dizi[toplam];
	int yenidizi[toplam];
	
	for(i=0; i<toplam; i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	
	for(i=0; i<toplam; i++)
	{
		printf("%d\n",dizi[i]);
	}
	
	toplam =0;
	
	for(i=0; i<toplam; i++)
	{
		if(dizi[i] % 3 == 0)
		{
			dizi[i] = yenidizi[i];
		}
		else
		{
			dizi[i] = yenidizi[i+1];
		}
	}
	
	for(j=0; j<toplam; j++)
	{
		printf("%d\n",yenidizi[j]);
	}
	
	
	return 0;
}



