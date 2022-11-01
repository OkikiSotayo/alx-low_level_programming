#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a;
	int fd;
	int txts;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (a = 0; text_content[a]; a++)
		;

	txts = write(fd, text_content, a);

	if (txts == -1)
		return (-1);

	close(fd);


	return (1);
}
