#include<stdio.h>
int main()
{
	int i,n,a,b;
	scanf("%d",&n);
	scanf("%d",&i);
		if(n&1<<i)
		{
			b=n&0<<i;
		}
		else
		{
			b=n|1<<i;	
		}
	printf("%d",b);
	return 0;
	
}
	
