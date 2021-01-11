#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double n,m;
     while(scanf("%lf",&n) != EOF){
           n*=n;
           n = (int)(n*10+0.5)/10.0;
        printf("%.1lf\n",n);
     }
    return 0;
        
}