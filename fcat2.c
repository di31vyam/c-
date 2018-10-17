#include<stdio.h>
int main()
{
	int n,d,c,e=1,f=0;
	scanf("%d\n",&n);
	 while(n>0)
        {
            d=n%10;
            n=n/10;
            printf("%d\n",d);
            for(c=1;c<=d;c++)
            {
                e=e*c;
            }
            printf("factorial%d\n",e);
    	}
            return 0;
}
