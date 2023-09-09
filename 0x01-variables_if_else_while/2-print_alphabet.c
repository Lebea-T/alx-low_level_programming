#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * description: this program prints alphbets in lowcase
 * Return: always 0
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	int count = 0;

	while (count < (int)strlen(alphabets))
	{
	putchar(alphabets[count]);
	count++;
	}
	putchar('\n');
	return (0);
}
