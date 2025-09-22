#include<stdio.h>
int main()
{
	int num,count=0,rem;
	printf("enter the number\n");
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		count++;
		num=num/10;
	}
	printf("digits are%d\n",count);
}
