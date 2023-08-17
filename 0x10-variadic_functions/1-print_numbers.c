#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vals;
	unsigned int i;

	va_start(vals, n);
	for (i = 0; i < n; i++)
	{
		int val = va_arg(vals, int);

		printf("%d", val);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vals);
}
