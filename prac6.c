#include<stdio.h>
int main()
{
	int i,j,n,k=0,l=0;
	scanf("%d",&n);
	int arr[n][n],ar1[n],ar2[n];
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
			if(n%2==0)
			{
				if(i==j)
				{
					arr[i][j]=arr[i][j]+arr[i][n-1-j];
					arr[i][n-1-j]=arr[i][j]-arr[i][n-1-j];
					arr[i][j]=arr[i][j]-arr[i][n-1-j];
				}
			}
			if(n%2!=0)
			{
				if(i==j && i+j!=n)
				{
					arr[i][j]=arr[i][j]+arr[i][n-1-j];
					arr[i][n-1-j]=arr[i][j]-arr[i][n-1-j];
					arr[i][j]=arr[i][j]-arr[i][n-1-j];
				}
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
