#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = argc - 1;
	if(argc >= 2)
	{
		while(argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
