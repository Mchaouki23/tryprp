#include <stdio.h>

int     ft_fibonacci(int index)
{
        if(index < 0)
                return  (-1);
        else if(index < 2)
                return (index);
        else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main()
{
	int x = 38;
	printf("%d\n", ft_fibonacci(x));
}

