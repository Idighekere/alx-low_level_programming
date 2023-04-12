#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end od a file
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		do {
			len++;
		} while (text_content[len]);

	fildes = open(filename, O_WRONLY | O_APPEND);
	w = write(fildes, text_content, len);

	if (fildes == -1 || w == -1)
		return (-1);

	close(fildes);

	return (1);
}
