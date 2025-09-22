#include<stdio.h>
int main()
{
	int num,i,result;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		result=1;
		if(i%3==0)
		{
			result=result*i*i*i;
			printf("%d\t", result);
		}
	}
}
