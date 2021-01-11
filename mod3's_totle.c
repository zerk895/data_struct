#include<stdio.h>

int main() {
	int n, temp = 0;
	
	scanf("%d", &n);
	
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			temp += i;
		}
	}
	printf("%d", temp);
	return 0;
}