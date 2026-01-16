#include <stdio.h>
#include <stdbool.h>
void main()
{
    int n;
    int i=0;
    int a=2;

    printf("Enter n>0: ");
    scanf("%d",&n);
    while(a<=n/2)
    {
        if(n%a==0)
        {
            int m=2;
            bool isPrime=true;
            while(m<=a/2)
            {

                if(a%m==0)
                {
                    isPrime=false;
                    break;
                }
                m=m+1;
            }
             if(isPrime)
                {
                    i=i+1;
                    printf("a is: %d\n",a);
                }
        }
        a=a+1;
    }
    printf("\nprime divs are : %d",i);
}
