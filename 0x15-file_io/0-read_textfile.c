#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and print sit to the POSIX
 * @letters: the number of letters
 * @filename: the actual file being read
 * Return: the actual number of letters printed
 * 0 if filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[1024];
	ssize_t byteread, total_bytes_read = 0;
	int fildes;

	if (filename == NULL)
		return (0);

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
		return (0);

	do {
		if (write(STDOUT_FILENO, buff, byteread) != byteread)
		{
			close(fildes);
			return (0);
		}
		total_bytes_read = total_bytes_read + byteread;
	} while ((byteread = read(fildes, buff, sizeof(buff))) > 0 &&
			total_bytes_read < (ssize_t)letters);

	close(fildes);
	return (total_bytes_read);
}
