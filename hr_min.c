#include <stdio.h>
int main()
{
    int a,hours=0;
    scanf("%d",&a);
    while(a>=60)
    {
        ++hours;
        a=a-60;
    }
   printf("%d",hours);
   printf(" ");
   printf("%d",a);
   return 0;
}
