#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d",&b);
	char d='*';
	for(a=1;a<=b;a++)
	{
		for(i=1;i<=a;i++)
		{
			printf("\t%c",d);
		}
		printf("\n");
	}
}


