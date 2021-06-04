# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arminasy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/17 17:36:07 by arminasy          #+#    #+#              #
#    Updated: 2021/05/17 19:34:14 by arminasy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = ./

SRC	=	ft_strlen.c				\
		ft_atoi.c				\
		ft_uitoa.c				\
		ft_isalpha.c			\
		ft_isdigit.c			\
		ft_itoa.c				\
		ft_itoa_base.c				\
		ft_numlen.c				\
		ft_numlen_base.c				\
		ft_putnbr_base.c				\
		ft_putchar.c			\

OBJS = $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -c -I$(INCLUDES)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all