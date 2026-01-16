#include <stdio.h>
 void main()
 {
     int n;
     int m=0;
     int a=0;
     int p=1;
     printf("Enter n>0 : ");
     scanf("%d",&n);
     while (n>0)
     {
        a=n%10;
        if ( a%2=0 )
        {
            m=m*p+a;
            p=p*10;
        }
        n=n/10;
     }
     printf("m is : %d",m);
 }
