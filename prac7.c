#include<stdio.h>
int main()
{
	int i,j,n,a=0,b=0;
	printf("Enter size of matrix\n");
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
			if(i==j)
			{
				a=a+arr[i][j];
			}
			if(i+j==n-1)
			{
				b=b+arr[i];
			}
		}
	}
	printf("sum of main diagnol %d",a);
	return 0;
}
