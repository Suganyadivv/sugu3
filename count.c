#include <stdio.h>

int main()
{ 
    char ch[10];
    scanf("%s",ch);
    int count,i=0;
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        printf("%s",ch);
        printf("\n");
    }
    return 0;
}
