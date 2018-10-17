#include<stdio.h>
int main()
{
	int a,b,d,n,c;
	printf("enter number");
	scanf("%d",&n);
	b=n%10;
	printf("the first digit is%d\n",b);
	while(a<=(n-1))
	{
		c=n%10;
		n=n/10;
	}
	printf("the last digit is%d",c);
	return 0;
}
