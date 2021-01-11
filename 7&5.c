#include<stdio.h>

int main() {
	int n, temp = 0;
	
	while(scanf("%d", &n)!= EOF){
	
	for (int i = 1; i <= n; i++)
	{
	 if(i%35==0)
        {
            if(i==35)
                printf("%d",i);
            else
                printf(" %d",i);
        }      
	}
	printf("\n");
	}
	return 0;
}