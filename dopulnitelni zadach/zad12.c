#include <stdio.h>
 void main ()
 {
     int n, m;
     int max=0;

     printf("Enter n>0: ");
     scanf("%d",&n);
     while(n>0){
        m=n%10;
        if (m>max){
            max=m;
        }
        n=n/10;
     }
     printf("max is : %d", max);
 }
