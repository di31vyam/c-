#include<stdio.h>
int main() {
    int a,b,n,d,c,e;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&n);
        while(n>0)
        {
        d=n%10;
        n=n/10;
          
            if(d%2==0 )
            {
               c=d; 
            }
            else 
            {
                e=d;
            }    
    	}
    	if(c%2==0)
    	printf("Not Lucky");
    	else if(e%2!=0)
    	printf("Lucky");
    }
    
    return 0;
}
