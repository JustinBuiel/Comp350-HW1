#include <stdio.h>

int main()
{
	int n = 0;
	int sum = 0;
	printf("Please enter an int: \n");
	scanf("%d",&n);

	for(int i = 0; i<=n; i++)
	{
		sum = sum + i;
	}
	printf("The sum of the natural numbers up to %d is %d\n",n,sum);
}
