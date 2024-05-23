#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	while((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if(s1[i] > s2[i])
			return (1);
		else if(s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}

int	main()
{
	char s[] = "helloo";
	char t[] = "hello";

	printf("%d\n", ft_strncmp(s, t, 4));
}
