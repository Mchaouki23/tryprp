#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <stdbool.h>
#include <unistd.h>
#define TRUE 0
#define FALSE 1
#define EVEN(n) ((n) % 2 == 0)
#define t_bool bool
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

void    ft_putstr(char *str);
t_bool  ft_is_even(int nbr);

#endif
