/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 18:12:13 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/08 16:12:49 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_extract_number(const char **format, va_list lst_format)
{
	const char	*format_1;
	int			number;

	number = 0;
	format_1 = *format;
	if (*format_1 == '*')
	{
		number = (int)va_arg(lst_format, int);
		format_1++;
	}
	else
		while ('0' <= *format_1 && *format_1 <= '9')
		{
			number = number * 10 + *format_1 - '0';
			format_1++;
		}
	*format = format_1;
	return (number);
}

int	ft_extract_data_format(t_list *list, const char **format,
								va_list lst_format)
{
	const char	*format_1;
	int			c;

	format_1 = *format;
	while (ft_indic(*format_1, list))
		format_1++;
	if ((list->width = ft_extract_number(&format_1, lst_format)) < 0)
	{
		list->width = -list->width;
		list->indic = '-';
	}
	if (*format_1 == '.')
	{
		format_1++;
		list->withprecision = 1;
	}
	if ((list->precision = ft_extract_number(&format_1, lst_format)) < 0)
		list->withprecision = 0;
	*format = format_1;
	c = ft_convert(lst_format, *format_1, list);
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list	lst_format;
	t_list	*list;
	int		wc;

	va_start(lst_format, format);
	wc = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, &*format, 1);
			wc++;
		}
		else
		{
			if (!(list = ft_ini_list()))
				return (0);
			format++;
			wc = wc + ft_extract_data_format(list, &format, lst_format);
			free(list);
		}
		if (*format)
			format++;
	}
	return (wc);
}
