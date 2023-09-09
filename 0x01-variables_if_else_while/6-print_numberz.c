#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * description: program prints numbers from 0 to 9
 * Return: always 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar('0'+number);
		number++;
	}
	putchar('\n');
	return (0);
}
