#include "main.h"

/**
 * read_textfile- a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the file name.
 * @letters: number of letters to be printed.
 * Return: returns the actual number of letters it could read an
 * print. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, r;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	n = read(fd, buf, letters);
	r = write(STDOUT_FILENO, buf, n);

	close(fd);
	free(buf);
	return (r);
}
