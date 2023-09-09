#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * description: this program prints alphbets in lowcase(reverse)
 * Return: always 0
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	int count = (int)strlen(alphabets) - 1;

	while (count >= 0)
	{
	putchar(alphabets[count]);
	count--;
	}
	putchar('\n');
	return (0);
}
