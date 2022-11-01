#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: a NULL terminated string to add at the end file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int fd;
	int txts;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (a = 0; text_content[a]; a++)
			;

		txts = write(fd, text_content, a);

		if (txts == -1)
			return (-1);
	}

	close(fd);


	return (1);
}
