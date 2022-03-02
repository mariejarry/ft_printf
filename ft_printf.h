/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarry <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:32:25 by mjarry            #+#    #+#             */
/*   Updated: 2022/03/02 11:15:25 by mjarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putchar(const char c);
int		ft_putptr(unsigned long long ptr, char *base);
int		ft_putx(unsigned int ptr, char *base);
void	ft_puthex(unsigned long long ptr, char *base, int base_len, int *len);
int		ft_putnbr(int nbr);
int		ft_putunsigned(unsigned int nbr);

#endif
