#include "main.h"
/**
 * read_textfile -this reads a text file
 * and it prints the letters written therein.
 * @filename:the filename
 * @letters: the number of letters printed
 * Return: the number of letters printed.
 * If it fails,then return null
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nrd, nwr;
char *buf;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);
nrd = read(fd, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);
close(fd);
free(buf);
return (nwr);
}
