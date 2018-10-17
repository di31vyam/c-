#include<stdio.h>
int main()
{
	int i,j,n,a,b=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=arr[j+1];
				b++;
			}
		}
	}
	for(i=0;i<n-b;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
