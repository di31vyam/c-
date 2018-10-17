#include<stdio.h>
int main()
{
	int i,j,n,a,b=0,k;
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
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
				{
					 arr[k]==arr[k+1];
				}
				b++;
			}
		}
	}
	printf("b=%d\n",b);
	for(i=0;i<n-b;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
