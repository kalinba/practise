#include <stdio.h>
int main()
{
    char c;
    int i=0;
    int i1=0;
    int i2=0;
    int i3=0;
    while(c!=10)
    {
        printf("Enter char- ");
        scanf("%c",&c);
        if(c>='a' && c<'z')
        {
            i++;
        }
        else if(c>='A' && c<'Z')
        {
            i1++;
        }
        else if(c>='0' && c<'9')
        {
            i2++;
        }
        else(i3++);
        }
    printf("Small letters are- %d , Upper letters are- %d , digits are- %d , Other symbols are- %d",i,i1,i2,i3);
    return 0;
}
