#include <stdio.h>
/**
 * main - entry point
 * description: program prints numbers from 0 to 9
 * Return: always 0
 */
int main(void)
{
	int numbers = 0;

		while (numbers < 10)
		{
			printf("%d", numbers);
			numbers++;
		}
	putchar('\n');
	return (0);
}
