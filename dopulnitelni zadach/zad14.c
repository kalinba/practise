#include <stdio.h>
#include <stdbool.h>

 void main()
 {
     int n,m,a;
     printf("Enter n>0: ");
     scanf("%d",&n);
     printf("Enter m>0: ");
     scanf("%d",&m);
     bool isFound=false;
     while (n>0 && !isFound)
     {
         a=n%10;
         n=n/10;
         if (m==a)
         {
             isFound=true;
         }
     }
     printf("is m found %d", isFound);
 }
