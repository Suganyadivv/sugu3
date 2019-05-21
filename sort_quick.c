#include <stdio.h>
int main()
{
    int size,i,j,k;
    scanf("%d",&size);
    int n[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<size;j++)
    {
        for(k=j+1;k<size;k++)
        {
            if(n[j]>n[k])
            {
                n[j]=n[j]+n[k];
                n[k]=n[j]-n[k];
                n[j]=n[j]-n[k];
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
