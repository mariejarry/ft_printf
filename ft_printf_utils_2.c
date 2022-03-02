#include "ft_printf.h"

int chr_count(int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
		i++;
	while (nbr < -9 || nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int chr_count_u(unsigned int nbr)
{
	int i;
	i = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}


int ft_putnbr(int nbr)
{
	long	nb;

	nb = (long)nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	return(chr_count(nbr));
}

int ft_putunsigned(unsigned int nbr)
{
	long	nb;

	nb = (long)nbr;
	if (nb >= 10)
	{
		ft_putunsigned(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	return (chr_count_u(nbr));
}
