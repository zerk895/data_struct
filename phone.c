#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int t;
    double sum = 0;
     scanf("%d", &t);
     if(t<=800)
        sum=t*0.9;
    else if(t>800 && t<1500)
        sum=(t*0.9)*0.9;
    else if(t>=1500)
        sum=(t*0.9)*0.79;
     printf("%.1lf\n",sum);
    return 0;
        
}