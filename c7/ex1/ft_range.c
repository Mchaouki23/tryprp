#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i = 0;
	if(min >= max)
		return (0);
	int	*array = (int*) malloc((max - min) * sizeof(int));
	if(!array)
		return (0);
	while(min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);
}

int	main()
{
	int min = 2;
	int max = 13;
	int *x = ft_range(min, max);
	int i = 0;
	while(i < (max - min))
	{
		printf("%d", x[i]);
		i++;
	}
	printf("\n");
}

