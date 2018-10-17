#include<stdio.h>
int main()
{
    int n,i,a,b,c,d,e,f,g;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        e=0;
        f=0;
        scanf("%d%d",&a,&b);
        for(g=a;g<=b;g++)
        {
            
            for(c=g;c!=0;c=c+0)
            {
                d=g%10;
                g=g/10;
                e=(e*10)+d;
            }
            printf("%d\n",e);
            if(e==c)
            {
                f=f+1;
            }
            
        }
        printf("%d\n",f);
    }
    return 0;
}
