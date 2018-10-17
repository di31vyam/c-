#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	a=31;
	while(a>=0)
	{
		if(n&1<<a)
		{
			b=a;
		}
		a--;
	}
	printf("%d position is lowest set bit",b);
	return 0;
}
