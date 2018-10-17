#include<stdio.h>
int main() {
    int a,b,n,i,d,c=1,e=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n);
        for(b=1;b<=n;b++)
        {
            c=c*b;
        } 
		printf("factorial is%d\n",c);  
		while(c>0)
    	{
       		d=c%10;
       		c=c/10;
       		e=e+1; 
    	}
  printf("number of digit is=%d\n",e);
    }
    return 0;
}
