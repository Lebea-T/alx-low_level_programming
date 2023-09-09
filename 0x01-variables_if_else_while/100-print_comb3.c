#include <stdio.h>

/**
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones = '0';

	for (tens = '0'; tens <= '9'; tens++) /*print tens place*/
	{
		for ( ; ones <= '9'; ones++) /*print ones place*/
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9')) /*skip comma at end*/
			{
				putchar(',');
				putchar(' ');
			}
			}
	ones = tens + 2;

	}
	putchar('\n');

	return (0);
}
