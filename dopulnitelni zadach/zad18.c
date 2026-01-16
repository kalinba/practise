#include <stdio.h>
 void main()
 {
     double a;
     double m=1.0;
     int n;
     int i=0;
     printf("Enter power n>0: ");
     scanf("%d",&n);
     printf("Enter number a >0: ");
     scanf("%lf",&a);
     while(n>i)
     {
         m=a*m;
         i=i+1;
     }
     printf("a power n is : %.2lf",m);
 }
