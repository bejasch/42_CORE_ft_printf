# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 11:43:58 by bschneid          #+#    #+#              #
#    Updated: 2024/05/06 12:52:56 by bschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
SOURCES = ft_pf_putchar.c ft_pf_puthex.c ft_pf_putint.c\
ft_pf_putptr.c ft_pf_putstr.c ft_pf_putunsigned.c ft_printf.c
OBJECTS = $(SOURCES:.c=.o)
FLAGS = -Wall -Werror -Wextra

all:	$(NAME)

.c.o:
	cc $(FLAGS) -c $< -o $@

$(NAME):	$(OBJECTS) $(HEADER)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

bonus:	all

.PHONY:	clean fclean all re bonus
