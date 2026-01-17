#include <stdio.h>
void main()
{
    char c;
    printf("Enter a char - ");
    scanf("%c",&c);

    if(c>='a' && c<='z')
    {
        char c1=c-32;
        printf("%c",c1);
    }
    else
    {
        printf("%c",c);
    }

}
