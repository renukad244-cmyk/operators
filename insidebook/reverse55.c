#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*(num-i)+1;j++)
		{
			printf("%d",num+1-i);
		}
		printf("\n");
	}
}
