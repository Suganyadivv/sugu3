#include <stdio.h>

int main()
{
    int n,fact=1;
    scanf("%d",&n);
    if(n!=0)
    {
    for(int i=1;i<n;i++)
    {
        fact=fact+fact*i;
    }
    printf("%d",fact);
    }
    else
    {
        printf("1");
    }
    return 0;
}
