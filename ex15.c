#include<stdio.h>
int main()
{
	int k=10;
	switch(k)
	{
		case '5':
		case 11:printf("case%d",k);
		case 15:
		case 20:
			k--;
		printf("%d\n",k);
	}
}
