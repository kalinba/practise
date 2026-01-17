#include <stdio.h>
 void main()
 {
     int n;
     int m=0;
     printf("Enter n>0 : ");
     scanf("%d",&n);
     while(n>0){
        m=10*m+n%10;
        n=n/10;
     }
     printf("m is: %d",m);
   printf(zadachata e reshena);
 }
