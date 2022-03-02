#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putchar(const char c);
int ft_putptr(unsigned long long ptr, char *base);
int	ft_putx(unsigned int ptr, char *base);
void ft_puthex(unsigned long long ptr, char *base, int base_len, int *chrcount);
int ft_putnbr(int nbr);
int ft_putunsigned(unsigned int nbr);
