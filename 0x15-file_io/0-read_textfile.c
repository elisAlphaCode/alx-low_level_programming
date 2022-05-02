#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rcount, wcount;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	rcount = read(fd, buf, letters);
	if (rcount == -1)
		return (0);

	buf[letters + 1] = '\0';

	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1 || wcount != rcount)
		return (0);

	free(buf);
	close(fd);
	return (rcount);

}
