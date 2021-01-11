#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int power(double base, int expoential)
{
    if (expoential == 0)
        return 1;
    
    double result = 1.0;

    if (expoential > 0) {
        for (int i = 0; i < expoential; i++)
            result *= base;
    }
    else if (expoential < 0) {
        for (int i = 0; i < -expoential; i++)
            result /= base;
    }
    
    return result;
}

int main()
{
    int n,m;
     while(scanf("%d",&n) != EOF)
     {
        int r=power(2,n);
        if(n<31)
        {
           printf("%d\n",r);
        }else
        {
         printf("Value of more than 31\n");
         
        }
     }
    return 0;
        
}