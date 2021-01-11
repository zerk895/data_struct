#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int n,a,b,c;
     while(scanf("%d",&n) != EOF)
     {
        a=n/10;
        b=(n-a*10)/5;
        c=(n-a*10-b*5)/1;

         printf("NT10=%d\n",a);
         printf("NT5=%d\n",b);
         printf("NT1=%d\n",c);

     }
    return 0;
        
}