#include "main.h"

/**
 * * append_text_to_file - appends text at the end of a file
 * * @filename: is the name of the file .
 * * @text_content: the NULL terminated string to add at the end of the file.
 * *
 * * Return: 1 if the file exists. -1 if the fails does not exist
 * * or if it fails. 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int new_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (new_letters = 0; text_content[new_letters]; new_letters++)
			;

		rwr = write(fd, text_content, new_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
