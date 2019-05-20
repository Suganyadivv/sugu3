#include <stdio.h>

int main()
{
    int size,k,sum=0;
    scanf("%d",&size);
    scanf("%d",&k);
    int n[size];
    for(int i=1;i<=size;i++)
    {
       scanf("%d",&n[i]);  
    }
   for(int i=1;i<=k;i++)
   {
       sum=sum+n[i];
   }
    printf("%d",sum);
    return 0;
}
