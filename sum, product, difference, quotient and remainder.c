#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,m;
     while(scanf("%d%d",&n,&m) != EOF){
        
       printf("%d+%d=%d\n",n,m,n+m);
       printf("%d*%d=%d\n",n,m,n*m);
       printf("%d-%d=%d\n",n,m,n-m);
       int k = n%m;
       if(k >= 0){
        printf("%d/%d=%d...%d\n",n ,m ,n/m ,k);
       }else{
            
            int q = n/m;
            if(q<0){
                q-=1;
            }else{
                q+=1;
            }
            k = n-m*q;
            printf("%d/%d=%d...%d\n",n ,m ,q ,k);
            
        }
            
        
     }
     return 0;
        
}