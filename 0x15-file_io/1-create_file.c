#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: file name to create
  * @text_content: null determined string to write to the file
  *
  * Return: 1 on sucess and -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
