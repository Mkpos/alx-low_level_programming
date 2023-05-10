#include "main.h"
#include <string.h>

/**
 * create_file - This creates a file.
 * @filename: The name of the file to be created.
 * @text_content: A pointer to the str we want to write.
 *
 * Return: 1 on success or -1 0n failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file and give rw-------
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int res;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		return (1);

	length = strlen(text_content);

	res = write(fd, text_content, length);
	if (res != length)
		return (-1);

	res = close(fd);

	return (1);
}
