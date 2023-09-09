#include <stdio.h>

/**
 *main - entry point
 *description:print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		putchar('0' + numbers);
		if (numbers != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');

	return (0);
}
