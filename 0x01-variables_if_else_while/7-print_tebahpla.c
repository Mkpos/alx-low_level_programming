#include <stdio.h>

/**
 * main - This program will print lowecase alphabert in reverse
 * Return: Always 0
 */
int main(void)
{
	char y;

	for (y = 'z' ; y >= 'a' ; y--)
		putchar(y);

	putchar('\n');

	return (0);
}
