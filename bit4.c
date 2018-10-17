#include<stdio.h>
int main()
{
	int n,i,a=0;
	scanf("%d",&n);
	i=0;
	while(i<32)
	{
		if(n&1<<i)
		break;
		else
		a=a+1;
		i++;
	}
	printf("%d",a);
	return 0;
}
