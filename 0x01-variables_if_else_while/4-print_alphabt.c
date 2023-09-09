#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * description: code prints alphbets excl e & q
 * Return: always 0
 */
int main(void)
{
	char alphabets[] = "abcdfghijklmnoprstuvwxyz";

		int count = 0;


	while (count < (int)strlen(alphabets))
	{
		putchar(alphabets[count]);
		count++;
	}
	return (0);
}
