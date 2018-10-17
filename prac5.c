#include<stdio.h>
int main()
{
	int i,j,n,a=0,b=0,c=0;
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && arr[i][j]==1)
			{
				a++;
			}
			if(i!=j && arr[i][j]==0)
			{
				b++;
			}
		}
	}
	if(a==n && b==n*n-n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
