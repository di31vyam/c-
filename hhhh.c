#include<stdio.h>
int main()
{
	int a,b;
	float c,d,e;
	printf("enter number");
	scanf("%d",&b);
	for(a=1;a<=b-1;a++)
	{
		c=c+(1/(float)a);
		printf("1/%d + ",a);
	}
		d=1/(float)b;
		e=c+d;
		printf("1/%d",b);
		printf("=%0.2f",e);
		return 0;	
}
