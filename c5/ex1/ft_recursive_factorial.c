#include <stdio.h>

int     ft_recursive_factrial(int nb)
{
        if(nb < 1)
                return 0;
        else if(nb == 1)
                return 1;
        else
                return (nb * ft_recursive_factrial(nb - 1));
}

int     main()
{
        int x = 0;
        printf("%d\n", ft_recursive_factrial(x));
}

