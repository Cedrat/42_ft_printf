/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:47:13 by lnoaille          #+#    #+#             */
/*   Updated: 2020/06/06 00:24:07 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct		s_list
{
	int				indic;
	int				width;
	int				withprecision;
	int				precision;
}					t_list;

int					ft_length_h(unsigned long	int	nb);
int					ft_put_c(t_list *list, char c, int i);
int					ft_put_s(t_list *list, char *s);
int					ft_length_nb(int nb);
int					ft_length_u(unsigned int ui);
size_t				ft_strlen(const char *s);
void				ft_write_x(char c, int x);
t_list				*ft_ini_list(void);
int					ft_indic(char c, t_list *list);
void				ft_putnbr(int nb);
void				ft_putnbr_u(unsigned int nb);
void				ft_putchar(char s);
void				ft_puthexa(unsigned long int nb);
void				ft_puthexa_m(unsigned long int nb);
int					ft_convert(va_list lst_format, char c, t_list *list);
int					ft_convert2(va_list lst_format, char c, t_list *list);
void				ft_putstr(char *s);
void				ft_putadr(unsigned long int nb);
void				ft_hexa_mr(unsigned long int nb);
void				ft_hexa_r(unsigned long int nb);
int					ft_put_d_i(t_list *list, int nb);
int					ft_put_x_bigx(t_list *list, size_t ulnb, void (*f)(size_t));
int					ft_count_x_bigx(t_list *list, unsigned long int ulnb);
int					ft_put_u(t_list *list, unsigned int unb);
int					ft_count_u(t_list *list, unsigned int unb);
int					ft_put_p(t_list *list, unsigned long int ulnb);
int					ft_convert3(va_list lst_format, char c, t_list *list);
int					ft_printf(const char *format, ...);

#endif
