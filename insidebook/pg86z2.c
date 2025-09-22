#include<stdio.h>
int main()
{
	int i,j,num=3,p;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		p=num;
		for(j=1;j<=num-i+1;j++)
		{
			printf("%d",p--);
		}
		p=p+2;
		for(j=1;j<=num-i;j++)
		{
			printf("%d",p++);
		}
		printf("\n");
	}
}

