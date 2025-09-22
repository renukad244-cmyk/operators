#include<stdio.h>
int main()
{
	int i=1,j=1;
	while(j<=8 && i<80)
	{
		while(i<=80 && j<=8)
		{
			printf("%d \t",i);
			j++;
			i++;
		}
		printf("\n");
		j=1;
	}
}

