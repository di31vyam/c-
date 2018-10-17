#include<stdio.h>
int main()
{
	int i,j,a,b=0,n,c,d=0;
	scanf("%d",&n);
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	a=arr[0];
	for(i=0;i<n;i++)
	{
	
		if(arr[i]!=a)
		{
			arr1[d]=a;
			a=a+2;
			d++;
		}
			if(arr[i]==a)
		{
			b++;
			a++;
		}
	}
	if(b!=n)
	{
		for(i=0;i<d;i++)
		{
			printf("Missing number is %d\n",arr1[i]);
		}	
	}
	else
	{
		printf("No");
	}
	return 0;
}
