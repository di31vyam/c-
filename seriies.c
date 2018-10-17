#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	for(a=0;a<=(n-1);a++)
	{
		b=pow(3,a);
		printf("%d\t",b);
	}
return 0;
}
