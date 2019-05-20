#include <stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
       r=n%10;
       sum=sum+r*r*r;
       n=n/10;
    }
    if(sum==a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
