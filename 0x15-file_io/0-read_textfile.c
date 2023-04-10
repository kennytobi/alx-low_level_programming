#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads the prints from a file
 * @filename: path to the file
 * @letters: chars to read
 * Return: char read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	int fd;
	ssize_t bytes_read, bytes_written, total_bytes = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if ((size_t)total_bytes + bytes_read > letters)
		{
			bytes_read = letters - total_bytes;
		}
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}
		total_bytes += bytes_read;
		if ((size_t)total_bytes >= letters)
		{
			break;
		}
	}
	close(fd);
	return (total_bytes);
}
