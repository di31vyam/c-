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
		printf("%s\n",c[i]);
	}
	for(i=0;i<k+1;i++)
	{
		b=0;
		for(j=i+1;j<k+1;j++)
		{
			if(strcmp(c[i],c[j])==0)
			{
				b++;
				e=i;
			}
		}
		if(b>d)
		{
			d=b;
		}
	}
	printf("most repeated word is %s",c[e]);
	return 0;
}
