#include "main.h"

/**
 * * _strlen - finds length of a string
 * * @str: pointer to string
 * *
 * * Return: length of string
 */
size_t _strlen(char *str)
{
	size_t index;

	for (index = 0; str[index]; index++)
		;
	return (index);
}

/**
 * * create_file - creates a file.
 * * @filename: name of file to create.
 * * @text_content: NULL terminated string to write to the file.
 * *
 * * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	if (len == -1)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);

	return (1);
}
