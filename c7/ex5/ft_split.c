#include <stdlib.h>
#include <stdio.h>

int     ft_seplen(char *str, char *sep)
{
        int i = 0;
        int j;
        int sp = 1; //for the last element
        while(str[i] != '\0')
        {
		j = 0;
            	while(sep[j] != '\0')
            	{
                	if(str[i] == sep[j])
                	{
                    		j = 0;
                    		while(sep[j] != '\0')
                    		{
                          		if(str[i+1] == '\0')
                              			break;
                          		if(str[i+1] == sep[j])
                          		{
                                		i++;
                                		j = 0;
                          		}
                          		else
                              			j++;
                    		}
                    		if(str[i+1] != '\0')
                        		sp++;
                    		break;
                	}
                	j++;
            	}
            	i++;
        }
        return sp;
}

char  *ft_astr(char *str, char *sep, char *des, int s, int i)
{
      int j;
      int k = 0;
      int check;
      while(str[i] != '\0' && k < s)
      {
	      check = 0;
	      j = 0;
	      while(sep[j] != '\0')
              {
		      if(str[i] == sep[j])
               	      {
                 	    check++;
			    break;
	              }
        	      j++;
              }
	      if(check == 0)
              {
		      des[k] = str[i];
              	      k++;
                      i++;
              }
              else
                 break;
      }
      des[k] = '\0';
      return (des);
}

char    **ft_split(char *str, char *charset)
{
        int seplen = ft_seplen(str, charset) + 1;//+1for null
        char **arr = malloc(seplen * sizeof(char *));
        if(!arr)
                return 0;
        int l = 0;
        int j;
        int s;
        int i = 0;
        int check;
	int m = 0;
        while(l < seplen - 1)
        {
		s = 0;
          	check = 0;
          	while(str[i] != '\0')
          	{
                	j = 0;
                	while(charset[j] != '\0')
                	{
                        	if(str[i] == charset[j])
                        	{
                              		i++;
					m++;
                              		if(str[i] != '\0')
                              		{
                                		j = 0;
                                 		while(charset[j] != '\0')
                                 		{
                                			if(str[i] == charset[j])
                                			{
                                  				i++;
								m++;
                                  				j = 0;
                                			}
                                			else
                                  				j++;
                              			}
                              		}
                                	check++;
                                	break;
                        	}
                        	j++;
                	}
                	if(check > 0)
                	{
                  		arr[l] = malloc(s * sizeof(char) + 1);
                  		if(!arr[l])
                      			return 0;
				ft_astr(str, charset, arr[l], s+1 ,(i-m-s));//s+1 sizeof arr and i-m-s possition of i after sperator
				m = 0;
                  		break;
                	}
                	s++;
                	i++;
                	if(str[i] == '\0')
                	{
                  		arr[l] = malloc(s * sizeof(char) + 1);
                  		if(!arr[l])
                      			return 0;
				ft_astr(str, charset, arr[l], s+1 ,(i-m-s));
                  		break;
                	}
          	}
          	l++;
        }
        arr[l] = NULL;
	return arr;
}

int	main()
{
	char str[] = "Tomorow;, is: eid el-adha, canim.";
	char ch[] = ",;:.";
	char **a = ft_split(str, ch);
	int i = 0;
    	for (int i = 0; i < 4; i++) {
        	printf("%s\n", a[i]);
    	}
}
