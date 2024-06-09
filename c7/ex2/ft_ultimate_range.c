#include <stdio.h>
#include <stdlib.h>

/*int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		i = 0;
	int		*buffer;
	

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	while (i < bound)
	{
		buffer[i] = min;
		min++;
	}
	return (bound);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", size);

}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int i = 0;
	int size = max - min;
	if(min >= max)
	{
		*range = 0;
		return 0;
	}
	int *arry = malloc(size * sizeof(int));
	if(!arry)
	{
		*range = 0;
		return (-1);
	}
	while(i < size)
	{
		arry[i] = min;
		i++;
		min++;
	}
	*range = arry;

	return (i);
}

int	main()
{
	int min = 2;
	int max = 12;
	int *t;

	int s = ft_ultimate_range(&t, min, max);
	int i = 0;
	while(i < s)
	{
		printf("%d", t[i]);
		i++;
	}
	printf("%d", s);

}











