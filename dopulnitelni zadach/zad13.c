#include <stdio.h>
 void main ()
 {
     int n,m,a;
     int i=0;
     printf("Enter number n>0: ");
     scanf("%d",&n);
      printf("Enter digit m>0: ");
     scanf("%d",&m);
     while (n>0)
     {
       a=n%10;
       n=n/10;
       if (m==a)
       {
           i=i+1;
       }
     }
     printf("m is found : %d times",i);
 }

