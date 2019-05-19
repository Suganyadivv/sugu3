#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
   
    if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
    {
        printf("Alphabets");
        
    }
    else
    {
        printf("Not");
    }

    return 0;
}
