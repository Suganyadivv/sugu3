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
    for(int j=i+1;j<size;j++) 
    {
    if(n[i]>n[j])
    {
         temp=n[i];
         n[i]=n[j];
         n[j]=temp;
    }
    }
    }
    for(i=0;i<size;i++)
    {
    printf("%d",n[i]);
    printf(" ");
    }
    return 0;
}
