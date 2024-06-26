#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_print_digit(long n, int base);
int	ft_print_digit_cap(long n, int base);
int	print_char(int c);
int	ft_print_str(char *str);

#endif