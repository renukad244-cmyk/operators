#include<stdio.h>
int main()
{
	int x=5,y=1,num,sum,i;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		static sum=0;
		for(y=1;y<=i;y++)
		{
			sum=sum+x*y;
		}
	}
	printf("%d\n",sum);
}
