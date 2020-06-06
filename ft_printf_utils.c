/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 21:32:46 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/06 16:28:10 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>

void	ft_putnbr(int n)
{
	unsigned int divider;
	unsigned int nb2;
	unsigned int abs_nb;

	divider = 1;
	if (n < 0)
		abs_nb = -n;
	else
		abs_nb = n;
	nb2 = abs_nb;
	while (nb2 > 9)
	{
		divider = divider * 10;
		nb2 = nb2 / 10;
	}
	while (divider)
	{
		ft_putchar((abs_nb / divider) + '0');
		abs_nb = abs_nb % divider;
		divider = divider / 10;
	}
}

void	ft_putnbr_u(unsigned int n)
{
	unsigned int divider;
	unsigned int nb2;
	unsigned int abs_nb;

	divider = 1;
	abs_nb = n;
	nb2 = abs_nb;
	while (nb2 > 9)
	{
		divider = divider * 10;
		nb2 = nb2 / 10;
	}
	while (divider)
	{
		ft_putchar((abs_nb / divider) + '0');
		abs_nb = abs_nb % divider;
		divider = divider / 10;
	}
}

void	ft_putadr(unsigned long int nb)
{
	if (nb)
	{
		ft_putstr("0x");
		ft_puthexa_ul(nb);
	}
}

void	ft_hexa_r(unsigned int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else
		ft_puthexa_u(nb);
}

void	ft_puthexa_ul(unsigned long int nb)
{
	if (nb)
	{
		ft_puthexa_ul(nb / 16);
		if (nb % 16 < 10)
			ft_putnbr(nb % 16);
		else
			ft_putchar(nb % 16 + 'a' - 10);
	}
}
