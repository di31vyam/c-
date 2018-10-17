#include<stdio.h>
int main()
{
	int a,d,b=1,c=0;
	scanf("%d",&a);
	if(a%2==0)
	{
		b=b+1;
	}
	while(a!=11)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			c=c+b;	
		}
		a=a+0;
	}
	printf("%d",c);
return 0;
}
