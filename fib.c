#include <stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    scanf("%d",&n);
     printf("%d",b);
    for(i=1;i<n;i++)
    {
        printf(" ");
        c=a+b;
        a=b;
        b=c;
       printf("%d",c);
    }
  return 0;
}
