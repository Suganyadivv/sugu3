#include <stdio.h>
int main()
{
    int a=1,b=1,c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        printf(" ");
        c=a+b;
        a=b;
        b=c;
    }
  return 0;
}
