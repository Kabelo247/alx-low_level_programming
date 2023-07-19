#include <stdio.h>
/**
 * main - Entry point
 * Description: Compute and prints the sum of all multiples of 3
 * Return: Always 0 on (success)
 */
int main(void)
{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibo1 + fibo 2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (count == 49)
			printf("\n");
	}
	return (0);
}
