#include <stdio.h>
 void main ()
{
int n,num,num2;
int i=0,sum=0;
printf("Enter n>0:");
scanf("%d",&n);
printf("Enter first number:");
scanf("%d",&num);
i=i+1;
sum=sum+num;
while(i<n){
    printf("Enter next number:");
    scanf("%d",&num2);
    sum=sum+num2;
    i=i+1;
}
 printf("sum is : %d", sum);
}
