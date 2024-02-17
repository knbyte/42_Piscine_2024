#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		write(1, &str[ctr++], 1);
	}
}

int	main(int argc, char *argv[])
{
	int	ctr;

	ctr = 1;
	while (ctr < argc)
	{
		ft_putstr(argv[ctr]);
		ctr++;
		write(1, "\n", 1);
	}
	return (0);
}

/*
argc contains the number of arguments passed through the command line.

argv[] is an array of character pointers, containing the parameters.
*/
