#include<stdio.h>
int main()
{
	int num,i,j,a;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		if(i<num)
		{
			for(j=1;j<=num-i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=2i-1;j++)
			{
				printf("*");
			}
		}
		if(i>num)
		{
			for(j=1;j
