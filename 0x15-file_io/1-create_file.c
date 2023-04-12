#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: the content of the file
 * Return: 1 on Success
 * Otherwisse -1
 */
int create_file(const char *filename, char *text_content)
{
	int fildes;
	int w;
	int len = 0;


	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		do {
			len++;
		} while (text_content[len]);
	}
	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fildes, text_content, len);

	if (fildes == -1 || w == -1)
		return (-1);
	close(fildes);

	return (1);
}
