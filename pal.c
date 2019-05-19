
#include <stdio.h>

int main()
{
    int n,rev,sum=0;
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n=n/10;
    }
    if(sum==a)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }

    return 0;
}
