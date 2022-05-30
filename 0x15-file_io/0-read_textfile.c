#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/*
 * read_textfile - write a function that reads a text file and prints it to POSIX
 * @filename: character for filename
 * return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, i, j;
char *buf;
if (!filename)
	return (0);
fd = open(filename, O_RDONLY);
if(fd == -1)
	return (0);
buf = malloc(sizeof(char) * letters);

if (!buf)
	return(0);
i = read(fd, buf, letters);
if (i < 0)
{
free(buf);
return (0);
}
buf[i] = '\0';
close(fd);
j = write(STOUT_FILENO, buf, i);
if (j < 0)
{
free(buf);
return (0);
}
free(buf);

return (j);
}
