#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,a,b=0,k=-1234,d;
	char str[50],c[50][50];
	scanf("%[^\n]s",str);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		b=0;
		for(j=i+1;j<a;j++)
		{
			if(str[i]==str[j])
			{
				b++;
			}
		}
		if(b>k)
		{
			k=b;
			d=i;
		}
	}
	printf("%c has max",str[d]);
return 0;
}
