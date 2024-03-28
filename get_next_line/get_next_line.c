

#include "get_next_line.h"
#define BUFFER_SIZE 4096

char	*get_next_line(int fd)
{
	char	*buffer;
	size_t 	bytes_read;

	if (fd < 0 || BUFFER_SIZE <=0)
    	return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd == NULL)
    	return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
}
