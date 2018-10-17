#include<stdio.h>
int main()
{
	int *n;
	int a,d,e=0,f,g=0;
	scanf("%d",&a);
	n=&a; 
	 while(*n>0)
            {
            d=*n%10;
            *n=*n/10;
                e=e*10+(d+1);
            }
            printf("%d\n",e);
            while(e>0)
            {
                f=e%10;
                e=e/10;
                g=g*10+f;
            }
            printf("%d",g);
                return 0;
}

