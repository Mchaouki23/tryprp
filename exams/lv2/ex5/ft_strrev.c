#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int len = 0;
	while(str[len] != '\0')
		len++;
	char *rev = malloc(len * sizeof(char) + 1);
	if(!rev)
		return 0;
	int i = 0;
	len -= 1;
	while(len >= 0)
	{
		rev[i] = str[len];
		i++;
		len--;
	}
	rev[i] = '\0';
	return rev;
}

int	main()
{
	char *s = "hello";
	printf("%s", ft_strrev(s));
}
		
