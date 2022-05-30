#include "main.h"
/**
 * create_file - is a function that creates a file
 * @filename: is the name of the file to be created
 * @text_content: is the text to be written in the file
 * Return: 1 for success -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, i = 0;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);
while (text_content && text_content[i])
i++;
write(fd, text_content, i);
close(fd);
return (1);
}
