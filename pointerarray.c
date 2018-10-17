#include<stdio.h>
int main()
{
	int i,n,j;
	scanf("%d",&n);
	int ar[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	display(n,ar);
	return 0;
}
void display(int n,int (*arr)[n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",*(*(arr+i)+j));
		}
		printf("\n");
	}
}
