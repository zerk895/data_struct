#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int n,i;
    long int sum = 1;
     while(scanf("%d", &n) != EOF){
         long int sum = 1;
    for(i=1;i<=n;i++)
        sum*=i;
     printf("%ld\n",sum);
    }
    return 0;
        
}