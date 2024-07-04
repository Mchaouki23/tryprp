#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	if(s1 > s2)
		return 1;
	if(s1 < s2)
		return -1;
	else
		return 0;
}

int	main()
{
	char *s = "hello";
	char *s2 = "hello";
	printf("%d", ft_strcmp(s, s2));
	printf("\n real = %d", strcmp(s, s2));
}
