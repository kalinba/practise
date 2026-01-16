#include <stdio.h>
void main()
{
    int n;
    int a=2;
    printf("Enter n>=2: ");
    scanf("%d",&n);
    while(a<=n/2)
    {
        if(n%a==0)
        {
            printf("n is NOT a prime number");
            return 0;
        }
       else a++;
    }
    printf("n is a prime number");
}
