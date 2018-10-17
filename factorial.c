#include<stdio.h>
int main()
{
	int a,b,c=1,d,e;
	printf("enter number ");
	scanf("%d",&b);
	printf("factorial of number is=");
	for(a=1;a<=b-1;a++)
	{
		c=c*a;
		printf("%d*",a);
	}
	e=c*b;
	printf("%d",b);
	printf("=%d",e); 
	return 0;
}
