#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter number upto which you want to see tables");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		for(c=1;c<=10;c++)
		{
			d=c*a;
			printf("%d*%d=%d,\t",a,c,d);	
		}
	
		printf("\n");
	}
	return 0;
}
