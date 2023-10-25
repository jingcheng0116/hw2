#include <iostream>

int main() {
	char sign = '*';
	char sign2 = ' ';
	int temp;
	int temp2;
	int i, j;
	for (int i = 1; i <= 10; i++) 
	{ 
		for (int j = 1; j <= i; j++)
		{ 
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 10; i >= 1; i--) 
	{ 
		for (int j = 1; j <= i; j++) 
		{ 
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= 10 - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10 - i; j++) 
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	
	return 0;
}
