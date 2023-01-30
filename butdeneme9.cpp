#include<stdio.h>


void sirala(int dizimiz[], int size)
{
	
	int i,j;
	int temp;
	
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(dizimiz[i] > dizimiz[j])
			{
				temp = dizimiz[i];
				dizimiz[i] = dizimiz[j];
				dizimiz[j] = temp;
			}
		}
	}
	
	for(i=0; i<size; i++)
	{
		printf("%d ",dizimiz[i]);
	}
}


int main()
{
	
	int dizi[10] = {23,12,34,554,3,2,15,34,21,78};
	
	sirala(dizi,10);
	
	return 0;
}
