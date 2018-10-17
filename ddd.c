#include<stdio.h>
int main()
{
	int a;
	int b,d;
	printf("enter rows\t");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		for(d=1;d<=a;d++)
		{
			printf("%d",d);
		}
			printf("\n");
		
	}
	return 0;
}
