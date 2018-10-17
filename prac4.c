#include<stdio.h>
int main()
{
	int i,j,k,r,c,r1,c1,n=0;
	printf("enter number of rows and column of first matrix\n");
	scanf("%d%d",&r,&c);
	printf("enter number of rows and column of second matrix\n");
	scanf("%d%d",&r1,&c1);
	int arr[r][c],arr1[r1][c1],ar[r][c1];
	printf("Enter elements of first matix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		printf("Enter elements of second matix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	if(c1==r)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c1;j++)
			{
				for(k=0;k<c;k++)
				{
					ar[i][j]=ar[i][j]+arr[k][j]*arr1[i][k];
				}
			}
		}
		printf("resultant matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",ar[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("multiplication is not possible");
	}
	return 0;
}
