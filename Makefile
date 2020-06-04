# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 18:19:38 by lnoaille          #+#    #+#              #
#    Updated: 2020/06/04 16:16:21 by lnoaille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_convert_utils.c ft_convert_utils2.c ft_convert.c \
 	   ft_flags_printf.c  ft_lst_printf.c     ft_printf_utils.c \
	   ft_printf_utils2.c ft_printf_utils3.c  ft_printf.c

DEP = ft_printf.h

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIB = ar rcs

.c.o : ${DEP}
		gcc ${CFLAGS} -c $< -o ${<:.c=.o}

all : 		${NAME}

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

clean :
			${RM} ${OBJS}
fclean :	clean
			${RM} ${NAME}

re :		fclean all
