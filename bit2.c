#include<stdio.h>
int main()
{
	int n,a,b,i;
	scanf("%d%d",&i,&n);
	if(i&(1<<n))
	{
		a=i&(0<<n);
		printf("%d",a);
	}
else
	{
		printf("%d",n);
	}
	
	return 0;
}
