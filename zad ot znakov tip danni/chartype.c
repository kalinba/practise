#include <stdio.h>
void main()
{
    char c;
    printf("Enter a char c - ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("%c is upper latin letter",c);
    }
    else if(c>='a' && c<='z')
    {
        printf("%c is smaller latin letter",c);
    }
    else if(c>='0' && c<='9')
    {
        printf("%c is digit",c);
    }
    else
    {
        printf("%c is another simbol",c);
    }
}
