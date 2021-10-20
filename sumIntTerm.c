#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
	int n = atoi(argv[1]);
	int sum = 0;
	//printf("Please enter an int: \n");
	//scanf("%d",&n);

	for(int i = 0; i<=n; i++)
	{
		sum = sum + i;
	}
	printf("The sum of the natural numbers up to %d is %d\n",n,sum);
}
