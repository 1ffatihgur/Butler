#include<stdio.h>
#include<string.h>


void sayi_yazdir()
{
	int i,a,b,c;
	int sayi,temp;
	
	for(i=100; i<=999; i++)
	{
		sayi = i;
		temp = sayi;
		
		a = sayi % 10;
		b = sayi / 100;
		c = (temp / 10) % 10;
		
		if(a != b && a != c && b != c)
		{
			printf("%d ",i);
		}
		else
		{
			continue;
		}
		printf("\n");
	}
}

int main()
{
	
	int tus;
	
	printf("Sayilari siralamak için '1'e basiniz: ");
	scanf("%d",&tus);
	
	if(tus == 1)
	{
		sayi_yazdir();
	}
	
	
	return 0;
}

