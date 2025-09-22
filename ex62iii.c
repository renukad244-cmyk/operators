#include<stdio.h>
int main()
{
	int num=5,i,j;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(i==j)
			       printf("L");	
				       
			else if(j==num+1-i)
				printf("/");

			else
				printf("*");

		}
		printf("\n");
	}
}
