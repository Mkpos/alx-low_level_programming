#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: The name of the file containing string to be appended
 * @text_content: A pointer to the str to be appended
 *
 * Return: 1 on success or -1 on failure.
 * if filename is NULL return -1, if text_content is NULL do not add anything.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int result;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		return (1);
	}

	length = strlen(text_content);

	result = write(fd, text_content, length);
	if (result == -1)
		return (-1);

	result = close(fd);
	if (result == -1)
		return (-1);

	return (1);
}
