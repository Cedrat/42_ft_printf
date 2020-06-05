/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:19:42 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/06 00:23:24 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_convert(va_list lst_format, char c, t_list *list)
{
	char	e;
	char	*str;
	int		nb;

	if (c == 'c')
	{
		e = (int)va_arg(lst_format, int);
		return (ft_put_c(list, e, 'c'));
	}
	else if (c == 's')
	{
		str = (char *)va_arg(lst_format, char *);
		return (ft_put_s(list, str));
	}
	else if (c == 'd' || c == 'i')
	{
		nb = (int)va_arg(lst_format, int);
		return (ft_put_d_i(list, nb));
	}
	else
		return (ft_convert2(lst_format, c, list));
}

int	ft_convert2(va_list lst_format, char c, t_list *list)
{
	unsigned long int ulnb;

	if (c == 'p')
	{
		ulnb = (unsigned long int)va_arg(lst_format, unsigned long int);
		return (ft_put_p(list, ulnb));
	}
	else if (c == 'x')
	{
		ulnb = (unsigned long int)va_arg(lst_format, unsigned long int);
		return (ft_put_x_bigx(list, ulnb, ft_hexa_r));
	}
	else if (c == 'X')
	{
		ulnb = (unsigned long int)va_arg(lst_format, unsigned long int);
		return (ft_put_x_bigx(list, ulnb, ft_hexa_mr));
	}
	else
		return (ft_convert3(lst_format, c, list));
	return (0);
}

int	ft_convert3(va_list lst_format, char c, t_list *list)
{
	unsigned int unb;
	char	e;

	if (c == 'u')
	{
		unb = (unsigned int)va_arg(lst_format, unsigned int);
		return (ft_put_u(list, unb));
	}
	else if (c == '%')
	{
		e = '%';
		return (ft_put_c(list, e, '%'));
	}
	else
		return (0);
}
