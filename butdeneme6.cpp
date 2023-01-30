#include<stdio.h>

int sayi_topla(int sayi)
{
	int i;
	int toplam=0;
	
	for(i=0; i<=sayi; i++)
	{
		toplam = toplam + i;
	}
	
	return toplam;
	
}

int main()
{
	
	int a,i,toplam;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&a);
	
	toplam = sayi_topla(a);
	
	printf("sayilarin toplami: %d",toplam);
}
