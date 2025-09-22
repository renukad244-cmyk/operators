#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(i%2==0)
			{
				printf(" *");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
