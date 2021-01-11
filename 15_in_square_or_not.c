#include <stdio.h>
#include<math.h>
#include<stdlib.h>
//#define pi 3.1415926

int judge(int a,int b)
{
    if(a <= 100 && b<= 100 && a>=0 && b>=0)
        return 1;
    return 0;
}

int main()
{
    int n,m;
     while(scanf("%d%d",&n,&m) != EOF){
        
        //printf("%d",ans);
        if(judge(n,m)){
            printf("inside\n");
        }else
        {
            printf("outside\n");
        }
    }
}