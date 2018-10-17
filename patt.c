#include<stdio.h>
int main()
{
    int a,c,g,h,n,b,d;
    char e='*',f='*';
    scanf("%d",&n);
    scanf("%d",&h);
    for(g=1;g<=h;h++)
    {
    	
	
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c",e);
        }
        printf("\n");
    
	}
    for(c=n-1;c>=1;c--)
    {
        for(d=c;d>=1;d--)
        {
            printf("%c",f);
        }
        printf("\n");
    }
}
    return 0;
}
