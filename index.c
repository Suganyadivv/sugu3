
#include <stdio.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int n[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d",n[i]);
        printf(" ");
        printf("%d",i);
        printf("\n");
    }
    return 0;
}
