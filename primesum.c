#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	c=0;
        for(a=1;a<=i;a++)
        {
            if(i%a==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            printf("%d",i);
        }
    }
return 0;
}
