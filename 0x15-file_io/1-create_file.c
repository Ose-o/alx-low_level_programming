#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Author: Ose o
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f_d, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	f_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f_d, text_content, length);

	if (f_d == -1 || w == -1)
		return (-1);

	close(f_d);

	return (1);
}



