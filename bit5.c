#include<stdio.h>
int main()
{
	int n,a=0,b=0,i;
	scanf("%d",&n);
	i=0;
	while(i<32)
	{
		if(n&1<<i)
		a=a+1;
		else
		b=b+1;
		i++;
	}
	printf("number of one is %d\n",a);
	printf("number of zero is %d",b);
	return 0;
}
