#include<stdio.h>
#include<string.h>

int main()
{
	
	int a,i,j;
	char temp[20];

	
	char names[7][20] = {"Ali","Kemal","Fatih","Ilayda","Melek","Selda"};

	
	for(i=0; i<7; i++)
	{
		for(j=i+1; j<7; j++)
		{
			if(strcmp(names[i],names[j]) > 0)
			{
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	
	printf("Alfabetik siralama sekli: \n");
	
	for(i=1; i<=7; i++)
	{
		printf("%s\n",names[i]);
	}
	
	
	
	return 0;
}
