#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: name of the file
 * @text_content: the content of the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wrr;
	int num;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (num = 0; text_content[num]; num++)
		;

	wrr = write(fd, text_content, num);

	if (wrr == -1)
		return (-1);

	close(fd);

	return (1);
}
