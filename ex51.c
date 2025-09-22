#include<stdio.h>
int main()
{
	int rem,num,sum=0,temp;
	printf("enter the number\n");
	scanf("%d", &num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	sum==temp ? printf("its a palindrome\n"):printf("not a palindrome\n");
}

