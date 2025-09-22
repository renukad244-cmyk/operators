#include<stdio.h>
int main()
{
	int i=0,j=10,k=6;
	while(1)
	{
		if(i==j || k<0)
			break;
		printf("%d %d %d \n",i,j,k);
		i++;
		j--;
		k=k-2;
	}
}
