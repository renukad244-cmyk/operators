#include<stdio.h>
int main()
{
	int min=100,max=999,sum=0,rem,temp;
	for(min=100;min<=max;min++)
	{
		sum=0;
		temp=min;
		while(min>0)
		{
			rem=min%10;
			sum=sum*10+rem;
			min=min/10;
		}
		min=temp;
			if(sum==min)
			{
				printf("%d\t",sum);
			}
	}
}
