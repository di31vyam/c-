#include<stdio.h>
int main()
{
    int n,max=65443;
    while(n!=(-1))
    {
        scanf("%d",&n);
        if(n<max)
        {
            max=n;
        }
    }
    printf("%d",max);
    return 0;
}
