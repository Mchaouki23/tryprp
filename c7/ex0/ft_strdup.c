#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}



int ft_strlen(char *str)
{
        int i = 0;

        while(str[i] != '\0')
        {
                i++;
        }

        return (i);
}

char	*ft_strdup(char *src)
{
	//allocate memory for dup +  null terminator
	char *dup = malloc((ft_strlen(src) + 1) * sizeof(char));
	if(dup == NULL)
		return (0);
	ft_strcpy(dup, src);
	return (dup);
}

int	main()
{
	char str[] = "hello, new ma";
	printf("%s", ft_strdup(str));
}
