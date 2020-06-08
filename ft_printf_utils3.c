/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 21:48:19 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/08 16:05:49 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_mr(unsigned int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else
		ft_puthexa_um(nb);
}

void	ft_puthexa_u(unsigned int nb)
{
	if (nb)
	{
		ft_puthexa_u(nb / 16);
		if (nb % 16 < 10)
			ft_putnbr(nb % 16);
		else
			ft_putchar(nb % 16 + 'a' - 10);
	}
}

void	ft_puthexa_um(unsigned int nb)
{
	if (nb)
	{
		ft_puthexa_um(nb / 16);
		if (nb % 16 < 10)
			ft_putnbr(nb % 16);
		else
			ft_putchar(nb % 16 + 'A' - 10);
	}
}

void	ft_write_x(char c, int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		write(1, &c, 1);
		i++;
	}
}

int		ft_length_nb(int nb)
{
	int i;

	i = 0;
	if (nb == -2147483648)
		return (11);
	if (nb <= 0)
		i++;
	while (nb)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}
