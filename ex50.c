#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("enter the number\n");
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	printf("%d\n",sum);
	sum=sum*2;
	printf("double the value%d\n",sum);
}
