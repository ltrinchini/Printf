# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltrinchini <ltrinchini@student.42lyon.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 13:20:36 by ltrinchi          #+#    #+#              #
#    Updated: 2023/04/30 12:27:28 by ltrinchini       ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	   ft_printf.c \
	   ft_putadress.c \
	   ft_putchar.c \
	   ft_putnbr_base.c \
	   ft_putstr.c \
	   ft_strlen.c

OBJS = $(SRCS:.c=.o)
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o: ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

bonus: $(OBJS) $(OBJSBONUS)
	ar rc $(NAME) $(OBJS) $(OBJBS)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re
