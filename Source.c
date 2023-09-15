#include <stdio.h>

int pow(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}

int main()
{
	int exp = 7; int c = 1;

	for (int i = 0; c < 2147483648; i++)
	{
		if(i == 0)
		{
			printf("%d ", pow(i, exp));
		}
		else
		{
			c = pow(i, exp);
			printf("%d ", pow(i, exp));
			int j = i - (i + i);
			printf("%d ", pow(j, exp));
		}
	}
	return 0;
}