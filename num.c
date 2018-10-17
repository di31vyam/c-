#include<stdio.h>
int main()
{
	int a,c,e,b=0,n,d;
	scanf("%d",&e);
	n=e;
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		b=b+(d*d*d);
		
}
printf("%d",b);
	if(b==e)
	{
		printf("you enter narmstrong");
	}
	else
	{
		printf("you not");
	}
	return 0;
}
