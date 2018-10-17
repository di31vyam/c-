#include<stdio.h>
int main() {
    int a,b,n,c,d,e=0;
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        d=n%10;
        n=n/10;
        c=n+d;
        if(c==8)
        {
            e=e+1;
        }
        
    }
    printf("%d",e);
    return 0;
}
