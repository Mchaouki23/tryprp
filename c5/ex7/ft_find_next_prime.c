#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i = 2;
	if(nb <= 1)
		return (0);
	else
	{
		while(i <= (nb / 2))
		{
			if(nb % i == 0)
				return (0);
			i++;
		}
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	//check every number
	int x = ft_is_prime(nb);
	if(x == 0)
		ft_find_next_prime(nb + 1);
	else
		return(nb);
}


int main()
{
	printf("%d\n", ft_find_next_prime(2));
}

