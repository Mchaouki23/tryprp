#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i = 2;
	if(nb == 1)
		return (1);
	else if(nb >= i)
	{
		while(i <= (nb / 2))
		{
			if((i * i) == nb)
				return i;
			i++;
		}
	}
	else
		return (0);

}

int	main()
{
	int n = 2775556;
	printf("%d\n", ft_sqrt(n));
}
