#include <stdio.h>
void main ()
{
    int n,a,b;
    int max,i=1;
    printf("Enter n>0");
    scanf("%d",&n);
    printf("Enter first number>0 : ");
    scanf("%d",&a);
    i=i+1;
    if (a % 3 = 0) {
        max=a;
    }
    while(i<n) {

        printf("Enter next number>0 : ");
        scanf("%d",&b);
        i=i+1;
        if (b%3 = 0) {
            if (b > max) {

                max=b;
            }
        }
        i = i + 1;
    }
    if (max = 1) {
        printf("No number is divided by 3");
    } else {
         printf("Max number divided by 3 is %d", max);
    }
}
