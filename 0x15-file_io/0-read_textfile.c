#include "main.h"
#include <stdlib.h>

/**
  * read_textfile -  function that reads a text file and prints it
  * @filename: text to be read and print
  * @letters: number of letters that should read and print
  *
  * Return: the actual number of letters it could read and print
  * 0 if the file cannot be opened
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
