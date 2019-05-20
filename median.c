#include <stdio.h>
int main()
{
   int size,i,median;
   scanf("%d",&size);
   int a[size];
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(a[i]<a[j])
           {
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
    median=size/2;
 // printf("%d",median);
    printf("%d",a[median]);
    return 0;
}
