#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    double n,a,b,c;
     while(scanf("%lf",&n) != EOF)
     {
         a=1*100;     //change to cm
         b=30*2.54;
         for(int i=1;i<100000;i++)
         if( n*100 - (a - b)*i <= 0)
        {
         printf("%d\n",i);
         break;
        }
     }
    return 0;
        
}