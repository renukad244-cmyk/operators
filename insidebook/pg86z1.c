#include<stdio.h>
int main()
{
	int num,i,j,k;
	printf("enter the number\n");
	scanf("%d" ,&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		k=num+1-i;
		for(j=1;j<=num-i+1;j++)
		{
			printf("%d", k++);
		}
		k=k-2;
		for(j=1;j<=num-i;j++)
		{
			printf("%d",k--);
		}
		printf("\n");
	}
}
