#include <stdio.h>

int main()
{
    int no;
    scanf("%d",&no);
    if(no<0)
     {
        printf("invalid");
    }
    else if(no%2==0)
    {
    
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
