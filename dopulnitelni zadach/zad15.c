#include <stdio.h>
 void main()
 {
     int n;
     int m=2;
     int i=2;
     printf("Enter n>0: ");
     scanf("%d",&n);
     while(m<=n/2)
     {
         if(n%m==0)
         {
             printf("m= %d",m);
             i=i+1;
         }
         m=m+1;
     }
     printf("i is: %d",i);
 }
