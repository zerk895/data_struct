#include <stdio.h>
#include<math.h>
#include<stdlib.h>
//#define pi 3.1415926

int main()
{
    int n,m;
     while(scanf("%d%d",&n,&m) != EOF){
        int ans = n*n+m*m;
        //printf("%d",ans);
        if(ans<=10000){
            printf("inside\n");
        }else
        {
            printf("outside\n");
        }
    }
}