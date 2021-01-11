#include <stdio.h>  
#include<math.h>  
#include<stdlib.h>  
  
int main()  
{  
    int n,m;  
     while(scanf("%d %d",&n,&m) != EOF){  
           int r=n+m;  
           r*=r;  
        printf("%d\n",r);  
     }  
    return 0;  
          
}  