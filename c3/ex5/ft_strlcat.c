#include <stdio.h>

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char src[] = "Benguerir";
	char dest[] = "1337 ";
	printf("%s", ft_strlcat(dest, src, 4));
}

