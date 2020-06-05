/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 18:20:47 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/06 00:22:38 by lnoaille         ###   ########.fr       */
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
	if (precision > 0)
		char_count = precision;
	if (width > 0)
		char_count = char_count + width;
	char_count = char_count + ft_length_nb(nb);
	if (list->withprecision && list->precision == 0 && nb == 0 && !list->width)
		char_count = 0;
	return (char_count);
}

int	ft_put_d_i(t_list *list, int nb)
{
	int width;
	int precision;

	if (list->indic == '0' && list->withprecision)
		list->indic = -1;
	if (nb < 0 && list->withprecision)
		list->precision++;
	precision = list->precision - ft_length_nb(nb);
	width = (precision >= 0 && list->withprecision)
		? list->width - list->precision : list->width - ft_length_nb(nb);
	if (width && list->precision == 0 && list->withprecision && nb == 0)
		width++;
	if (list->indic == -1)
		ft_write_x(' ', width);
	if (nb < 0)
		ft_putchar('-');
	if (list->indic == '0')
		ft_write_x('0', width);
	if (list->withprecision)
		ft_write_x('0', precision);
	if (nb != 0 || !(list->withprecision == 1 && list->precision == 0))
		ft_putnbr(nb);
	if (list->indic == '-')
		ft_write_x(' ', width);
	return (ft_count_d_i(list, nb));
}

int	ft_put_c(t_list *list, char c, int i)
{
	if ((list->indic == '0' && i == 'c') || list->indic == -1)
		ft_write_x(' ', list->width - 1);
	else if (list->indic == '0' && i == '%')
		ft_write_x('0', list->width - 1);
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
	int width;

	i = 0;
	if (ft_strlen(s) > (size_t)list->precision && list->withprecision)
		width = list->width - list->precision;
	else
		width = list->width - ft_strlen(s);
	if (width < 0)
		width = 0;
	if (list->indic == '0' || list->indic == -1)
		ft_write_x(' ', width);
	while (s[i] && (list->precision > i || list->withprecision == 0))
	{
		ft_putchar(s[i]);
		i++;
	}
	if (list->indic == '-')
		ft_write_x(' ', width);
	return (i + width);
}

int	ft_put_x_bigx(t_list *list, size_t ulnb, void (*f)(size_t))
{
	int width;
	int precision;

	if (list->indic == '0' && list->withprecision)
		list->indic = -1;
	precision = list->precision - ft_length_h(ulnb);
	if (precision > 0)
		width = list->width - list->precision;
	else
		width = list->width - ft_length_h(ulnb);
	if (list->width && list->precision == 0 && list->withprecision)
		width++;
	if (list->indic == '0')
		ft_write_x('0', width);
	else if (list->indic == -1)
		ft_write_x(' ', width);
	if (list->withprecision)
		ft_write_x('0', precision);
	if (ulnb != 0 || !(list->withprecision == 1 && list->precision == 0))
		(*f)(ulnb);
	if (list->indic == '-')
		ft_write_x(' ', width);
	return (ft_count_x_bigx(list, ulnb));
}
