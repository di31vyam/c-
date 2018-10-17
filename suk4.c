#include<stdio.h>
int main()
{
	int a,b,yr,wk,dy;
	printf("enter days");
	scanf("%d",&a);
	b=a%365;
	yr=a/365;
	wk=b/7;
	dy=b%7;
	printf("year =%d weeks=%d days=%d",yr,wk,dy);
	

	return 0;
}
