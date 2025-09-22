#include<stdio.h>
int main()
{
	int i=1;
	for( ; ;i )
	{
		if(i==5)
			break;
		printf("%d\n", i);
		i++;
	}
}

