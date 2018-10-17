#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[]="hitesh";
	reverse(a);
	return 0;
}
void reverse(char *a)
{
	if(*a)
	{
		reverse (*(a+1));
	}
	printf("%c",*a);
}
