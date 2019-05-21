#include <stdio.h>
int main()
{
      int n[10],i,temp;
      for(i=0;i<10;i++)
      {
          scanf("%d",&n[i]);
      }
      for(i=0;i<10;i++)
      {
          for(int j=i+1;j<10;j++)
          if(n[i]>n[j])
          {
             temp=n[i];
             n[i]=n[j];
             n[j]=temp;
          }
      }
      printf("%d",temp);
      return 0;
}
