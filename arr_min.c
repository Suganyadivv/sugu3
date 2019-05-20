#include <stdio.h>
int main()
{
    int size,i,temp;
    scanf("%d",&size);
    int n[size];
    for(i=0;i<size;i++)
    {
       scanf("%d",&n[i]);
    }
    for(i=0;i<size;i++)
    {
    if(n[i]<n[i+1])
    {
         temp=n[i];
         n[i]=n[i+1];
         n[i+1]=temp;
    }
    }
   printf("%d",temp);
   return 0;
}
