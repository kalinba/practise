#include <stdio.h>
 void main()
 {
    int n,a,avg;
    int sum=0;
    int i=0;
    printf("Enter n numbers- ");
    scanf("%d",&n);
    printf("Enter number- ");
    scanf("%d",&a);
    while(i<n)
    {
        if(a<0)
        {
            break;
        }
        else
        i=i+1,sum=sum+a;

    }
    avg=sum/i;
    printf("avg of the numbers is: %d");
 }
