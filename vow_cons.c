
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
   // char str[10]={'a','i','o','u','e','A','E','I','O','U'};
   // int i=0;
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') || (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))  
    {
        
        printf("Vowel");  
    }
    else if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
    {
        printf("Consonant");
        
    }
    else
    {
        printf("invalid");
    }

    return 0;
}
