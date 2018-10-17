#include<stdio.h>
int main()
{
	int a,b,n,c,k;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		k=1;
		for(b=1;b<=(n-a);b++)
		{
			printf(" ");
		}
		for(c=n-a+1;c<=n;c++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}
	
	return 0;
}
