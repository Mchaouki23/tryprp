#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char i = 'z';
	while(i >= 'a' && i <= 'z')
	{
		if(i % 2 == 0)
			ft_putchar(i);
		else
			ft_putchar(i - 32);
		i--;
	}
	ft_putchar('\n');
	return 0;
}
			
