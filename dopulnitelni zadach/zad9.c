#include <stdio.h>
void main()
{
    int n,m;
    int sum=0;
    printf("Enter n>0: ");
    scanf("%d",&n);
    while (n>0){
        m=n%10;
        n=n/10;
        sum=sum+m;
    }
    printf("sum is : %d",sum);
}
