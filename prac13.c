#include<stdio.h>
int main()
{
	int i,j,k,n,a=0,b=0,e=-1234,h=0;
	scanf("%d",&n);
	int arr[n],f[n],c[n],d[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		f[i]=1;
	}
	for(i=0;i<n;i++)
	{
		a=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				a++;
				f[j]=0;
			}
		}
		if(f[i]==1)
			{
				printf("frequency of %d is %d\n",arr[i],a+1);
				if(a+1>)
					for(k=b;k<b+a+1;k++)
				{
					c[k]=arr[i];
					d[h]=a+1;
					h++;
				}
				b=b+a+1;
			}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	
	return 0;
}
