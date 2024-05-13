#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
      

int main()
{       
        int t[] = {1,2,3,4};
        int *tab = t;
        
        ft_rev_int_tab(tab,4);
        int i = 0;
        while(i < 4)
        {
        printf("%d", tab[i]);
        i++;
        }
}

/*void ft_rev_int_tab(int *tab, int size)
{       
        int c[size];
        int i = 0;
        int j = 1;
        
        while(i < size)
        {       
                c[i] = tab[size - j];
                i++;
                j++;
        }    
        i = 0;
        while(i < size)
        {
          
            tab[i] = c[i];
            i++;
        }

} */
