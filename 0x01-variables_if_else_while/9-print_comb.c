#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints comb of numbers'
 * Returns: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
