#include <stdio.h>
void main ()
{
    int n;
    double b;
    double avg=0;
    int i=0;
    double sum=0;
    printf("Enter n>1 || n<30: ");
    scanf("%d",&n);

    while (i<n)
    {
        printf("Enter rate: ");
        scanf("%lf",&b);
        if(b<2.0 || b>6.0)
        {
            printf("wrong rate, enter new one ");
            continue;
        }
        else
        {
            sum=sum+b;
        }
        i=i+1;
    }
    avg=sum/n;
    printf("Avg is: %.2lf",avg);
}
