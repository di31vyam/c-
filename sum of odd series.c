#include<stdio.h>
int main()
{
	int a,b,d,e=0,f,g;
	printf("enter last number of series");
	scanf("%d",&b);
	for(a=1;a<=b;a=a+2)
	{
		printf("%d\t\n",a);
	}
	for(d=1;d<=b-2;d=d+2)
	{
		e=e+d;
		printf("%d+",d);
	}
	printf("=%d",e);
	
return 0;	
}
