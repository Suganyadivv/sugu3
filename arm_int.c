#include <stdio.h>
int main()
{
   int a,b,r;
   scanf("%d%d",&a,&b);
   for(int i=a+1;i<b;i++)
   {
       int sum=0,k;
       k=i;
       while(k>0)
       {
           r=k%10;
           sum=sum+r*r*r;
           k=k/10;
       }
       if(sum==i)
       {
           printf("%d",i);
           printf(" ");
       }
   }
     return 0;
}
