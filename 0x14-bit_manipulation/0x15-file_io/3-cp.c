#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
void check(int status, char type, int fd, char *name);
/**
 * main - programs that will copy the contents of a file to another file
 * @argc: number of argument that was passeds
 * @argv: collection of argumentss whichh passed
 * Return: integer of value
 */

int main(int argc, char *argv[])
{
	int statuss1, statuss2, statuss3, statuss4, n = 1024, word_write;
	mode_t mode;
	char buffer[1024];

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	statuss1 = open(argv[1], O_RDONLY);
	check(statuss1, 'o', -1, argv[1]);

	statuss2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check(statuss2, 'w', -1, argv[2]);

	while (n == 1024)
	{
		n = read(statuss1, buffer, sizeof(buffer));
		if (n < 0)
			check(-1, 'o', -1, argv[1]);
		word_write = write(statuss2, buffer, n);
		if (word_write == -1)
			check(-1, 'w', -1, argv[2]);
	}

	statuss3 = close(statuss1);
	check(statuss3, 'c', -1, argv[2]);

	statuss4 = close(statuss2);
	check(statuss4, 'c', -1, argv[2]);
	return (0);
}

/**
 * check - check thethe status
 * @status: here is status of the previously called function
 * @type: the char to show if the prev function is read, write or close
 * @fd: the file destination 
 * @name: name of them file to check
 */

void check(int status, char type, int fd, char *name)
{
	if (type == 'o' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}
	else if (type == 'w' && status == -1)
	{
	dprintf(STDERR_FILENO, "Error: Error: Can't write to %s\n", name);
		exit(99);
	}

	else if (type == 'c' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
