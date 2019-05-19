#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count<2)
    {
        printf("yes");     //prime_no
    }
    else
    {
        printf("no");     //not prime_no
    }

    return 0;
}
