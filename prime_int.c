#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a+1;i<b;i++)
    {
       int count=0;
      for(int j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            count++;
        }
        }
        if(count<=2)
        {
            printf("%d",i);
            printf(" ");
        }
     }
    return 0;
}
