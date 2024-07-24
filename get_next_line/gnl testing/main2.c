#include "get_next_line_bonus.h"

int main(void)
{
	int		fd[2];
	char	*line;

	fd[0] = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd[0])) != NULL)
	{
		printf("Line %d: %s\n", fd[0], line);
		free(line);
	}
	close(fd[0]);
	fd[1] = open("testcopy.txt", O_RDONLY);
	while ((line = get_next_line(fd[1])) != NULL)
	{
		printf("Line %d: %s\n",fd[1], line);
		free(line);
	}
	close(fd[1]);
	return (0);
}