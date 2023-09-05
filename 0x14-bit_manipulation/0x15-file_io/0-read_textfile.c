#include  <stdlib.h>
#include "main.h"

/**
 * read_textfile - help read a text file and prints it to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: The numb o letters the function should read
 * and print
 *
 * Return: provided the file cannot be opened,read, is NULL or if it fails - 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Op, Re, Wr;
	char *gard;

	if (filename ==  NULL)
		return (0);

	guard = malloc(sizeof(char) * letters);
	if (gard == NULL)
		return (0);

	Op = open(filename, O_RDONLY);
	Re = read(Op, gard, letters);
	Wr = write(STDOUT_FILENO, gard, Re);

	if (Op == -1 || Re == -1 || Wr == -1 || Wr != Re)
	{
		free(gard);
		return (0);
	}

	free(gard);
	close(Op);

	return (Wr);
}
