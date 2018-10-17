#include<stdio.h>
int main()
{
	int a,b,i;
	char c='*';
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		for(b=i;b>=1;b--)
		{
			printf("%c",c);

		}
	printf("\n");	
	}
	
	return 0;
}
