#include <stdio.h>
 void main ()
 {
     int n,i;
     printf("Enter n>0: ");
     scanf("%d",&n);
     i=0;
     while (n>0){
        n=n/10;
     i=i+1;
     }
     printf("i is: %d",i);
 }
