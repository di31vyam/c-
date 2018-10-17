#include<stdio.h>
int main()
{
	int i,j,a,n,b,c=1234,d,e=-1234;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			a=arr[i]+arr[j];
			
			b=a-0;
			if(b<0)
			{
				d=b;
				if(d>e)
				{
					e=d;
				}
				b=-b;
			}
			if(b<c)
			{
				c=b;
			}
		}
	}
	
	if(c==-e)
	printf("Closet sum to zero %d",e);
	else
	printf("Closet sum to zero %d",c);
	return 0;
}
