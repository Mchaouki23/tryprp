#include <stdio.h>
#include <stdlib.h>

int	strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

char	ft_strcpy(char *str, char *dest)
{
	int i = 0;
	while(str[i] != '\0' && dest)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
char	*ft_strdup(char *str)
{
	if(str = NULL)
		return 0;
	int len = strlen(str);
	char *dup = malloc(len * sizeof(char) + 1);
	if(!dup)
		return 0;
	ft_strcpy(str, dup);
	return dup;
}

int main()
{
	char *s = "hello";
	printf("me %s\n", ft_strdup(s));
	printf("real %s", strdup(s));
}

