#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int ascii = 97;
	printf("Please enter an int from 1-26:\n");
	scanf("%d",&n);
	int alphabet[n];

	for(int i = 0; i < n; i++)
	{
		alphabet[i] = ascii;
		ascii++;
	}

	printf("The first %d letters are:\n",n);
	for(int j = 0; j < (n - 1); j++)
	{
		printf("%c, ",alphabet[j]);
	}
	printf("%c \n",alphabet[n-1]);
}
