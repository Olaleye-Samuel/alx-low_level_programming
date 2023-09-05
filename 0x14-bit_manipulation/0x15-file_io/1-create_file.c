#include "main.h"

/**
 * create_file - Creates as files
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointr to a strng to write to the file
 *
 * Return: as 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int Op, Wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	Wr = write(Op, text_content, len);

	if (Op == -1 || Wr == -1)
		return (-1);

	close(Op);

	return (1);
}
