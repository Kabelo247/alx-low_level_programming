#include "main.h"
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase
 * Return: Always 0 on (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
