#include<stdio.h>
int main()
{
	int num,digit,count=0,rem;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("enter the digit\n");
	scanf("%d", &digit);
	while(num>0)
	{
		rem=num%10;
		if(digit==rem)
		{
			count++;
		}
		num=num/10;
	}
	printf("%d", count);
}
