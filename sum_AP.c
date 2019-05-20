#include <stdio.h>
int main()
{
    int n,a,d;
    scanf("%d%d%d",&n,&a,&d);
    int s=(n*(2*a+(n-1)*d))/2;
    printf("%d",s);
    return 0;
}
