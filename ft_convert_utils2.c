/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 19:27:19 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/05 20:18:55 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_x_bigx(t_list *list, unsigned long int ulnb)
{
	int char_count;

	char_count = ft_length_h(ulnb);
	if (list->width > char_count)
		char_count = list->width;
	if (list->withprecision && list->precision > char_count)
		char_count = list->precision;
	return (char_count);
}

int	ft_put_u(t_list *list, unsigned int unb)
{
	int width;
	int precision;

	precision = list->precision - ft_length_u(unb);
	if (precision > 0)
		width = list->width - list->precision;
	else
		width = list->width - ft_length_u(unb);
	if (list->indic == '0')
		ft_write_x('0', width);
	else if (list->indic == -1)
		ft_write_x(' ', width);
	if (list->withprecision)
		ft_write_x('0', precision);
	if (unb != 0 || !(list->withprecision == 1 && list->precision == 0))
		ft_putnbr_u(unb);
	if (list->indic == '-')
		ft_write_x(' ', width);
	return (ft_count_u(list, unb));
}

int	ft_count_u(t_list *list, unsigned int unb)
{
	int char_count;

	char_count = ft_length_u(unb);
	if (list->width > char_count)
		char_count = list->width;
	if (list->withprecision && list->precision > char_count)
		char_count = list->precision;
	return (char_count);
}

int	ft_put_p(t_list *list, unsigned long int ulnb)
{
	int length_ulnb;

	if (ulnb == 0)
		length_ulnb = 3;
	else
		length_ulnb = ft_length_h(ulnb) + 2;
	if (list->indic == '0')
		ft_write_x(' ', list->width - length_ulnb);
	else if (list->indic == -1)
		ft_write_x(' ', list->width - length_ulnb);
	if (ulnb == 0)
		ft_putstr("0x0");
	else
		ft_putadr(ulnb);
	if (list->indic == '-')
		ft_write_x(' ', list->width - length_ulnb);
	if (list->width > length_ulnb)
		return (list->width);
	return (length_ulnb);
}
