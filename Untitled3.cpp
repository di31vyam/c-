#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,a,b=0;
	char str[50],c[200][200];
	scanf("%[^\n]s",str);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		for(j=i;j<a;j++)
		{
			c[i][j]=str[i];
		}
	}
}
