#include<stdio.h>
int main()
{
	int i=0;
	label:
	if(i<=80)
	{
		i++;	
		printf("%d\t", i);
		goto label;
	}
}

