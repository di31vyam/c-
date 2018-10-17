#include<stdio.h>
int main() 
{
    int a,b,c=0,n,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n);
        for(b=1;b<=n;b++)
        {
            if(n%i==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            printf("PRIME\n");
        }
        else
        {
            printf("NOT PRIME\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
