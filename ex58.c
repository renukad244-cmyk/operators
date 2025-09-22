#include<stdio.h>
int main()
{
	int c=1,a=0,b=1;
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	while(c<100)
	{
		c=a+b;
		if(c==num)
		{
			printf("its fibonacci number\n");
			break;
		}
		a=b;
		b=c;
	}
	if(c!=num)
	{
		printf("not fibonacci number\n");
	}

	
}


