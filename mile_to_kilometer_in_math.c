#include<stdio.h>  
  
int main() {  
    double n;  
      
    while(scanf("%lf",&n) != EOF){  
      
        n=n*1.6;  
        printf("%.1lf\n", n);  
    }  
    return 0;  
} 