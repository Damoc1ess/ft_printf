# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/01 13:57:55 by fflamion          #+#    #+#              #
#    Updated: 2024/06/01 14:41:04 by fflamion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
LIBFT=libft/libft.a

make -C libft

SRCS=ft_printf.c
OBJS=$(SRCS:.c=.o)


CC=gcc
CFLAGS=-Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJS)
	make bonus -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -lft

 clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus