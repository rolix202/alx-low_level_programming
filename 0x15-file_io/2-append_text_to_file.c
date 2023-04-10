#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: char
 * @text_content: char
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int len;

	for (len = 0; text_content[len];)
	{
		len++;
	}

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		w = write(fd, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
