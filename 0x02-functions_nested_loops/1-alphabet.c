#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase
 * Return: Always 0 on (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
