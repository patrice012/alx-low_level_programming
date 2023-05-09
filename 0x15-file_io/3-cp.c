#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_error - print error to stderr
 * @file: file
 * @msg: exit message
 * @code: exit code
 * Return: Nothing
 */

void print_error(char *file,char *msg, int code)
{
	if (file)
		dprintf(STDERR_FILENO,"%s %s",msg , file);
	else
		dprintf(STDERR_FILENO,"%s",msg);
	exit(code);
}


/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * @max_size: buffer max size
 * Return: A pointer to the newly-allocated buffer.
 */
char *_buffer(char *file, int max_size)
{
	char *buffer;

	buffer = malloc(sizeof(char) * max_size);

	if (buffer == NULL)
	{
		char *msg = "Error: Can't write to %s\n";
		print_error(file, msg, 99);

	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		/*char *msg =  "Error: Can't close fd %d\n";*/
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);

		/* print_error(fd, msg, 100);*/
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;
	int max_size = 1024;
	char *msg;
	if (argc != 3)
	{
		msg =  "Usage: cp file_from file_to\n";
		print_error(NULL, msg, 97);
	}

	buffer = _buffer(argv[2], max_size);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, max_size);
	to = open(argv[2], O_WRONLY | O_TRUNC);
	if (to == -1)
		to = open(argv[2], O_CREAT | O_WRONLY, 0664);

	do {
		if (from == -1 || r == -1)
		{
			free(buffer);
			msg = "Error: Can't read from file %s\n";
			print_error(argv[1], msg, 98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			free(buffer);
			msg = "Error: Can't write to %s\n";
			print_error(argv[2], msg, 99);
		}

		r = read(from, buffer, max_size);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
