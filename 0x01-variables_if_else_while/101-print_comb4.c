#include<stdio.h>
/**
*main-Entrypoint
*Description: Print combinations of two digits using putchar
*Return: Always 0
*/
int main(void)
{
	int n, m, l;

for (n = 48; n < 58; n++)
{
	for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(1);
					if (n != 55 || m != 56)
					{
		  putchar(',');
putchar(' ');

					}
				}
			}
		}
	}
putchar('\n');
return (0);
}
