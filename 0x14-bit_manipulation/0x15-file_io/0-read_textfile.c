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
	char *buff;
	ssize_t fdd;
	ssize_t wr;
	ssize_t t;

	fdd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fdd);
	return (wr);
}

