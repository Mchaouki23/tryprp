#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == 'a')
			{
				ft_putchar('a');
				break;
			}
			i++;
		}
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return 0;
}
