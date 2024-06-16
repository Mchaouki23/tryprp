#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkchar(char argv[])
{
	int i = 0;
	while(argv[i] != '\0')
	{
		if((argv[i] > 0 && argv[i] < 5) || argv[i] == 32 || argv[i] == 9)
			i++;
		else
			break;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = checkchar(argv[1]);
		while(argv[1][i] != '\0')
		{
			if(!((argv[1][i] > 0 && argv[1][i] < 5) || argv[1][i] == 32 || argv[1][i] == 9))
				ft_putchar(argv[1][i]);
			else
				break;
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
