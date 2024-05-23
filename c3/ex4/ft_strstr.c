#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
        int i = 0;
        int j = 0;

        if(to_find[j] == '\0')
                return (str);

        while(str[i] != '\0' && to_find[j] != '\0')
        {
                if(str[i + j] == to_find[j] && str[i + j] != '\0')
                        j++;
                else
                {
                    i++;
                    j = 0;
                }
        }
        if(to_find[j] == '\0')
                return (str + i);
        return (NULL);
}

int     main()
{
        char s[] = "hello, MALAK 16 May, 16 : 33";
        char t[] = "MA";

        printf("%s", ft_strstr(s, t));
}
