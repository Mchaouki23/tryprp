#include <stdio.h>

int	ft_iterative_factrial(int nb)
{
	int y = 1;
	if(nb < 0)
		return 0;
	while(nb > 0)
	{
		y *= nb;
		nb--;
	}
		return y;	
}

int	main()
{
	int x = 3;
	printf("%d\n", ft_iterative_factrial(x));
}
