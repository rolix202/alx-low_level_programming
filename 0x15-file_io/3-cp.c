#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define BUFF_SIZE 1024

/**
 * print_error - function
 * @code: int
 * @msg: char
 * @arg: char
 */

void print_error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from;
	int fd_to;
	char buffer[BUFF_SIZE];
	ssize_t b_read, b_write;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, "Error: Can't read from file NAME_OF_THE_FILE %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(99, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_to);
	}

	while((b_read = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		b_write = write(fd_to, buffer, b_read);
		if (b_write == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_to);
		}
	}
	if (b_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(fd_from) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_from);
	}
	if (close(fd_to) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_to);
	}
}

/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to",argv[0]);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
