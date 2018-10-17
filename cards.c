#include<stdio.h>
int main()
{
	int a,b,c,n=0;
	printf("enter number");
	scanf("%d",&a);
	while(a!=(-999))
	{
		n=n+a;
		scanf("%d",&a);
		a=a+0;
	}
	printf("%d",n);
	return 0;
}
