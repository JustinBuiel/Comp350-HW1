#include <stdio.h>

int sum(int n)
{
	int sum = 0;
	for(int i = 0; i<=n; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int main()
{
	int ans = sum(3);
	printf("The sum of the natural numbers up to %d is %d\n",3,ans);
}
