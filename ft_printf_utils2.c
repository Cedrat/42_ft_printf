/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 21:44:49 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/05 20:08:28 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_length_h(size_t nb)
{
	int i;

	i = 0;

	while (nb)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

int		ft_length_u(unsigned int ui)
{
	int i;

	i = 0;
	if (ui == 0)
		return (1);
	while (ui)
	{
		i++;
		ui = ui / 10;
	}
	return (i);
}

size_t	ft_strlen(const char *s)
{
	size_t pos;

	pos = 0;
	while (s[pos])
		pos++;
	return (pos);
}

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}
