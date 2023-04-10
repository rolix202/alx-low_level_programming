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

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	fd = open(text_content, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
