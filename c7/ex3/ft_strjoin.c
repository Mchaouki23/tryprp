#include <stdio.h>
#include <stdlib.h>

int   ft_strlen(char *str)
{
      int i = 0;
      while(str[i] != '\0')
            i++;
      return i;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
        int len = ft_strlen(sep) * (size - 1);
        int i = 0;
        int j;
        while(i < size)
        { 
          len += ft_strlen(strs[i]);
          i++;
        }
        len += 1;
        char *arr = malloc(len * sizeof(char));
        if(arr == 0)
                return 0;
        i = 0;
        j = 0;
        int k = 0;
        while(j < size)
        {
                k = 0;
                while(strs[j][k] != '\0')
                {
                  arr[i] = strs[j][k];
                  k++;
                  i++;
                }
                k = 0;
                while(sep[k] && j != (size - 1))
                {
                    arr[i] = sep[k];
                    i++;
                    k++;
                }
                j++;
        }

        arr[i] = '\0';
        return (arr);
}
int     main()
{
        char *s[] = {"hello", "hi", "45kk"};
        char sp[] = " ,";
        printf("%s", ft_strjoin(3, s, sp));
}
