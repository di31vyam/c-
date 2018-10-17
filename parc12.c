#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,a,b=0,d=-1234,e;
	char str[50],c[50][50];
	scanf("%[^\n]s",str);
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
		for(j=i+1;j<k+1;j++)
		{
			if(strcmp(c[i],c[j])==0)
			{
				i++;
				b=i;
			}
			if(strcmp(c[i],c[j])==1 && i!=0)
			{
				j=0;
			}
		}
	}
	for(i=e;i<=b;i++)
	{
		printf("%s ",c[i]);
	}
	return 0;
}
