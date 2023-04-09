#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t t;
	ssize_t w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(BUF_SIZE * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
