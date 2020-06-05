/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 16:19:44 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/05 21:33:12 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_indic(char c, t_list *list)
{
	if (c == '-')
	{
		list->indic = '-';
		return (1);
	}
	if (c == '0' && list->indic != '-')
	{
		if (list->indic != '-')
			list->indic = '0';
		return (1);
	}
	return (0);
}
