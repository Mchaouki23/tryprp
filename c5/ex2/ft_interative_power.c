#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int y = 1;
	if(power < 0)
		return 0;
	if(power == 0)
		return 1;
	while(power > 0)
	{
		y *= nb;
		power--;
	}
		return y;	
}

int	main()
{
	int a = 0;
	int b = 6;
	printf("%d\n", ft_iterative_power(a, b));
}

