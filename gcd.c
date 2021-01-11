#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int gcd(int x,int y)
{
    if(x%y == 0){
        return y;    
    }else return gcd(y,x%y);
}

int main()
{
    int x,y,ans;
     scanf("%d %d", &x,&y);
     ans = gcd(x,y);
     printf("%d\n",ans);
    return 0;
        
}