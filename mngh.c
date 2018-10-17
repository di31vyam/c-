#include<stdio.h>
int main()
{
	int a=0,i;
	char str[50];
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		a++;
	}
	printf("%d",a);
	return 0;
}
