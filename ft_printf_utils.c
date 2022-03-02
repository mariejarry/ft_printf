#include "ft_printf.h"

int ft_putstr(char *str)
{
	int i;
	int len;

	i = -1;
	len = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[++i])
		len += ft_putchar(str[i]);
	return (len);
}

int ft_putptr(unsigned long long ptr, char *base)
{
	int len;

	len = ft_putstr("0x");
	ft_puthex(ptr, base, 16, &len);
	return (len);
}

void ft_puthex(unsigned long long ptr, char *base, int baselen, int *chrcount)
{
	if (ptr >= (unsigned long long)baselen)
		ft_puthex(ptr/baselen, base, baselen, chrcount);
	write(1, &base[(ptr % baselen)], 1);
	(*chrcount)++;
}

int ft_putx(unsigned int ptr, char *base)
{
	int	len;

	len = 0;
	ft_puthex(ptr, base, 16, &len);
	return (len);
}

