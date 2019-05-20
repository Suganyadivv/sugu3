#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        int mul=n*i;
        printf("%d",mul);
        printf(" ");
    }
    
    return 0;
}
