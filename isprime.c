#include<stdio.h>

isprime(m)
{
    if (m<2)
    return 0;
    for(int i=2;i*i<=m;i++)
        {
            if(m%i==0)
            {
                return 0;
            }
        }
    return 1;
}

int main() {
	int n;
	
    while(scanf("%d",&n) != EOF){
        if(isprime(n)==1)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}