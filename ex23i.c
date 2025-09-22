#include<stdio.h>
int main()
{
	int num,j,i;
	printf("enter the number\n");
	scanf("%d", &num);
	j=-10;

	for(i=1;i<=num;i++)
	{
		printf("%d",j);
		j=j-10;
		printf("\n");
	}

}


