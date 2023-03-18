#include <stdio.h>

/**
 * main - Tbis program prints all the numbers of base 16 in lowercase
 *Return: Always 0
 */
int main(void)
{
	int num;
	char x;

	for (num = 0 ; num <= 9 ; num++)
		putchar(num + '0');
	for (x = 'a' ; x <= 'f' ; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
