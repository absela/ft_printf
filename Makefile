# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absela <absela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 16:25:27 by absela            #+#    #+#              #
#    Updated: 2021/12/18 16:42:07 by absela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
SRCS =	ft_putp.c\
		ft_printf.c\
		ft_putd.c\
		ft_puts.c\
		ft_specifier.c\
		ft_putu.c\
		ft_putx.c\
		ft_putc.c


OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJS)
		ar -cr $(NAME) $(OBJS) 

%.o:%.c ft_printf.h
		cc $(CFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS)

fclean:clean
		rm -rf $(NAME)

re: fclean all

