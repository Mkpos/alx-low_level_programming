#include "main.h"
#include <stdio.h>


/**
 * close_file - This is an helper func used to close files.
 * @filedesc: A file desc from the open function.
 *
 * Return: Nothing
 */

void close_file(int filedesc)
{
	int ab;

	ab = close(filedesc);

	if (ab < 0)
	{
		if (ab < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedesc);
		exit(100);
	}
}

/**
 * main - This copies the content of a file into another file.
 * @argc: arg count
 * @argv: An array of pointers to the arguments passed
 *
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int p1, p2, a, b;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	p1 = open(argv[1], O_RDONLY);
	if (p1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		exit(99);
	}
	a = read(p1, buffer, 1024);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	p2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	b = write(p2, buffer, a);
	if (b < 0 || a != b)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		close(p1);
		free(buffer);
		exit(99);
	}
	close_file(p1);
	close_file(p2);
	return (0);
}
