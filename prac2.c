#include<stdio.h>
int main()
{
	int i,j,n,a,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&n);
	int arr[n],arr1[n],ar[n],ar1[n+n];
	printf("enter elements of fisrt array\n");
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
				arr[j]=arr[j+1];
				d++;
			}
		}
	}
	printf("enter elements of second array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr1[i]==arr1[j])
			{
				arr1[j]=arr1[j+1];
				e++;
			}
		}
	}
	for(i=0;i<n-e;i++)
	{
		for(j=0;j<n-e;j++)
		{
			if(arr[i]==arr1[j])
			{
				ar[b]=arr1[j];
				b++;
			}
		}
	}
	printf("intersection of element :\n");
	for(i=0;i<b;i++)
	{
		printf(" %d\n",ar[i]);
	}
	for(i=0;i<n-d+n-e;i++)
	{
		if(i<=n-d-1)
		{
			ar1[i]=arr[i];
		}
		if(i>n-d-1)
		{
			ar1[i]=arr1[c];
			c++;
		}
	}
	printf("union of elements\n");
	for(i=0;i<n-d+n-e;i++)
	{
		printf("%d\n",ar1[i]);
	}
	return 0;
}
