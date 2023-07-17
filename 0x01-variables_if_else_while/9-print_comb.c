#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all single-digit numbers using putchar
 * Return: Always 0 on (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
