#include<stdio.h>

int main() {
	int n, temp = 0;
	
	while(scanf("%d", &n)!= EOF){
	
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			temp += i;
		}
	}
	printf("%d\n", temp);
	    
	}
	return 0;
}