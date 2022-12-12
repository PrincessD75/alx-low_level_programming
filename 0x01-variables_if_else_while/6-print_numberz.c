#include <stdio.h>

/**
 * main - Prints all single digit numbers
 * Return: 0
 */
int main(void)
{
	int a;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
