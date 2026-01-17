#include <stdio.h>
void main()
{
    char c;
    while(c!='.')
    {
        printf("Enter char- ");
        scanf("%c",&c);
        if(c>'a' && c<'z')
        {
            char c1=c-32;
            printf("%c\n",c1);
        }
    }
}
