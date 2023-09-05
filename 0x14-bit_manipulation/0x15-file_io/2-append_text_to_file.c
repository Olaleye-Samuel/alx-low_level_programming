#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - the functions that append text at the end of a file.
 * @filename: the name of the files
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: for 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int io, file, statuss;

	if (filename == NULL)
		return (-1);
	file =  open(filename, O_WRONLY | O_APPEND);
	if (files < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (io = 0; text_content[io] != '\0'; io++)
			;
		statuss = write(files, text_content, io);
		if (statuss == -1)
			return (-1);
	}
	close(files);
	return (1);
}
