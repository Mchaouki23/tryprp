#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
        int i = 0;

        while(str[i] != '\0')
        {
                if(i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
                {
                        str[0] -= 32;
                }
                else if(!((str[i] >= 'a' && str[i] <= 'z') ||
                     (str[i] >= 'A' && str[i] <= 'Z') ||
                     (str[i] >= '0' && str[i] <= '9')) &&
                     (str[i + 1] >= 'a' && str[i+ 1] <= 'z'))
                {
                        str[i + 1] -= 32;
                        i++;
                }
                else if(((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
                     (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
                     (str[i - 1] >= '0' && str[i - 1] <= '9')) &&
                     str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] += 32;
                }
                i++;
        }

        return (str);
}

int     main()
{
        char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+Un";

        printf("%s", ft_strcapitalize(s));
}
