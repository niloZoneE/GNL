#include <stdio.h> //A DELETE MADA FUCKA
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int		fd;

	fd = 0;
	while (1)
	{
		get_next_line(fd, &line);
		if (line)
		{
			printf("%s\n", line);//A DELETE LE PRINTF MADA FUCKA
			line = NULL;
		}
	}
	return (0);
}
