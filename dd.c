#include<stdio.h>
int main()
{
	int a,b,c,e,f,g,i,d=0;
	printf("\tenter number\n\t");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		c=a*a*a;
		printf("\tcube of number %d is = %d\n",a,c);
	}
	printf("\tsum of cube of numbers :\t");
		for(e=1;e<=(b-1);e++)
	{
	f=e*e*e;	
	d=d+(e*e*e);
	printf("%d+",f);
	}
	i=b*b*b;
	g=i+d;
	printf("%d",i);
	printf("=%d",g);
		return 0;
}
