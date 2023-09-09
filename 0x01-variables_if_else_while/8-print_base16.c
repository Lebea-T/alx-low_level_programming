#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * description: this program prints numbers of base 16 (hexadec)
 * Return: always 0
 */
int main(void)
{
	char alphabets[] = "0123456789abcdef";

	int count = 0;

	while (count < (int)strlen(alphabets))
	{
	putchar(alphabets[count]);
	count++;
	}
	putchar('\n');
	return (0);
}
