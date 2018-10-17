#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k=0,a,b=0,d=-1234,e,n,h,l=0;
	char str[50],c[50][50],f[50][50],g[50][50];
	scanf("%[^/n]s",str);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		if(str[i]==' ')
		{
			c[k][j]='\0';
			k++;
			j=0;
		}
		if(str[i]!=' ')
		{
			c[k][j]=str[i];
			j++;
		}
	}
	c[k][j]='\0';
	for(i=0;i<k+1;i++)
	{
		b=0;
		for(j=i+1;j<k+1;j++)
		{
			if(strcmp(c[i],c[j])==0)
			{
				i++;
				f[l]=c[i];
				b++;
				l++;
			} 
			
			if(strcmp(c[i],c[j])==1 && b!=0)
			{
				l=0;
				break;
			}
			
			
		}
		if(b>d)
			{
				d=b;
				for(n=0;n<l;n++)
				strcpy(g[n],f[n]);
			}
	}
	return 0;
}
