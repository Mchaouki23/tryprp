#include <stdio.h>


void ft_sort_int_tab(int *tab, int size)
{
        int i = 0;
        int j;
        int swap;

        while(i < (size - 1))
        {
                j = 0;
                while(j < (size - 1 - i))
                {

                        if(tab[j] > tab[j + 1])
                        {
                                swap = tab[j];
                                tab[j] = tab[j + 1];
                                tab[j + 1] = swap;
                        }
                        j++;
                }
                i++;
        }
}

int main()
{
	int t[] = {6,7,1,9,0,5};
	int *tr = t;

	ft_sort_int_tab(tr, 6);
	for(int i = 0; i < 6; i++)
	{
		printf("%d", tr[i]);
	}
}
