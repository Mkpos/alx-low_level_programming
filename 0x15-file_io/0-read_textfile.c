#include "main.h"

/**
 * read_textfile - this reads a text file and prints
 * to the POSIX STDOUT
 * @filename: the name of the file to read.
 * @letters: max numb of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, a,len, res;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	read(fd, buffer, letters);
	buffer[letters] = '\0';

	for (a = 0; buffer[a] != '\0'; a++)
		len += 1;

	res = close(fd);
	if (res != 0)
	{
		exit(-1);
	}

	res = write(STDOUT_FILENO, buffer, len);
	if (res != len)
		return (0);

	free(buffer);

	return (len);
}
