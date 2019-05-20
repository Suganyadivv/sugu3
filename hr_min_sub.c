#include <stdio.h>
int main()
{
    int hr1,min1,hr2,min2,hr,min;
    scanf("%d%d%d%d",&hr1,&min1,&hr2,&min2);
    if(hr1>hr2)
    {
       hr=hr1-hr2; 
       min=min1-min2;
    }
    else
    {
        hr=hr2-hr1;
        min=min2-min1;
    }
    printf("%d",hr);
    printf(" ");
    printf("%d",min);
    return 0;
}
