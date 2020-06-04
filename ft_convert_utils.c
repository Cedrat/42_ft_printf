/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 18:20:47 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/04 16:15:37 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_d_i(t_list *list, int nb)
{
	int width;
	int precision;
	int char_count;

	char_count = 0;
	precision = list->precision - ft_length_nb(nb);
	if (precision > 0)
		width = list->width - list->precision;
	else
		width = list->width - ft_length_nb(nb);
	if (nb <= 0 && !(list->withprecision && list->precision == 0))
		width = width - 1;
	if (precision > 0)
		char_count = precision;
	if (width > 0)
		char_count = char_count + width;
	char_count = char_count + ft_length_nb(nb);
	if (nb < 0 || (nb == 0 && list->withprecision == 0))
		char_count++;
	return (char_count);
}

int	ft_put_d_i(t_list *list, int nb)
{
	int width;
	int precision;

	precision = list->precision - ft_length_nb(nb);
	if (precision > 0)
		width = list->width - list->precision;
	else
		width = list->width - ft_length_nb(nb);
	if (nb <= 0 && !(list->withprecision && list->precision == 0))
		width = width - 1;
	if (list->indic == -1)
		ft_write_x(' ', width);
	if (nb < 0)
		ft_putchar('-');
	if (list->indic == '0')
		ft_write_x('0', width);
	if (list->withprecision)
		ft_write_x('0', precision);
	if (nb != 0 || list->withprecision == 0)
		ft_putnbr(nb);
	if (list->indic == '-')
		ft_write_x(' ', width);
	return (ft_count_d_i(list, nb));
}

int	ft_put_c(t_list *list, char c)
{
	if (list->indic == '0' || list->indic == -1)
		ft_write_x(' ', list->width - 1);
	ft_putchar(c);
	if (list->indic == '-')
		ft_write_x(' ', list->width - 1);
	if (list->width > 1)
		return (list->width);
	else
		return (1);
}

int	ft_put_s(t_list *list, char *s)
{
	int i;

	i = 0;
	if (list->indic == '0' || list->indic == -1)
		ft_write_x(' ', list->width - ft_strlen(s));
	while (s[i] && (list->precision > i || list->withprecision == 0))
	{
		ft_putchar(s[i]);
		i++;
	}
	if (list->indic == '-')
		ft_write_x(' ', list->width - ft_strlen(s));
	if ((size_t)list->width > ft_strlen(s))
		return (list->width);
	else
		return (i);
}

int	ft_put_x_bigx(t_list *list, size_t ulnb, void (*f)(size_t))
{
	int width;
	int precision;

	precision = list->precision - ft_length_h(ulnb);
	if (precision > 0)
		width = list->width - list->precision;
	else
		width = list->width - ft_length_h(ulnb);
	if (ulnb == 0 && !(list->withprecision && list->precision == 0))
		width = width - 1;
	if (list->indic == '0')
		ft_write_x('0', width);
	else if (list->indic == -1)
		ft_write_x(' ', width);
	if (list->withprecision)
		ft_write_x('0', precision);
	if (ulnb != 0 || !list->withprecision)
		(*f)(ulnb);
	if (list->indic == '-')
		ft_write_x(' ', width);
	return (ft_count_x_bigx(list, ulnb));
}
