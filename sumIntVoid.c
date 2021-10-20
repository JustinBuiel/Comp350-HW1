#include <stdio.h>

void sum(int n, int* answer)
{
	int sum = 0;
	for(int i = 0; i<=n; i++)
	{
		sum = sum + i;
	}
	*answer = sum;
}

int main()
{
	int ans = 0;
	sum(3,&ans);
	printf("The sum of the natural numbers up to %d is %d\n",3,ans);
}
