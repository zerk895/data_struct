#include<stdio.h>


int main() {
	int n,sum=0;
	
    while(scanf("%d",&n) != EOF){
        sum=0;
       for(int i=0;i<=n;i++)
       {
           if(i%6==0 && i%12 != 0)
           sum+=i;
       }
       
        printf("%d\n",sum);
    }
	return 0;
}