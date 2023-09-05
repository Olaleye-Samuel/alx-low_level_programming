#include "main.h"
#include <stdio.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - do more to create the copy bash script
 * @ac: this can be argument count passed into it
 * @av: this can be arguments as strings collection
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input_fdi, output_fdo, istatus, ostatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
	dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_fd = open(av[1], O_RDONLY);
	if (input_fdi == -1)
	dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output_fdo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_fd == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		istatus = read(input_fd, buf, MAXSIZE);
		if (istatus == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	if (istatus > 0)
		{
		ostatus = write(output_fd, buf, (ssize_t) istatus);
		if (ostatus == -1)
			dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (istatus > 0);

	istatus = close(input_fd);
	if (istatus == -1)
	dprintf(SE, "Error: Can't close fd %d\n", input_fdo), exit(100);
	ostatus = close(output_fdo);
	if (ostatus == -1)
	dprintf(SE, "Error: Can't close fd %d\n", output_fdo), exit(100);

	return (0);
}
