#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter the number\n");
	scanf("%d", &num);
	j=1;
	for(i=1;i<=num;i++)
	{
		printf("%d ",j);
		j=j+i;
	}
}
