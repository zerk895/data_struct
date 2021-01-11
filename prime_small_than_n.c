#include<stdio.h>

int isprime(int m)
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
	int n,r;
	
    while(scanf("%d",&n) != EOF){
        r=0;
        for(int i=0;i<n;i++)
        {
           if(isprime(i))
                r=i;
        }
        printf("%d\n",r);
    }
	return 0;
}