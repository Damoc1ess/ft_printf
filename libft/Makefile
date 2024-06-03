# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 20:49:42 by fflamion          #+#    #+#              #
#    Updated: 2024/06/02 18:41:23 by fflamion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# List of source files
SRCS = 	ft_atoi.c \
		ft_isalpha.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putendl_fd.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_putnbr_fd.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memset.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_split.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_putchar.c \
		ft_putnbr_hex.c \
		ft_putpointer.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putnbr_u.c 
		
# Object files for source files
OBJS = ${SRCS:.c=.o}

# List of bonus sourcs files
SRCSBONUS =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

# Objet files for bonus source files
OBJSBONUS = ${SRCSBONUS:.c=.o}

# Name of the library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Command for remove files after compilation
RM = rm -f

# Target
all: ${NAME}

# Rule to compile .c into .o
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# Rules to create the lib for object
${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

# Rules to add bonus to the lib -r raplace -c create - s index cree un index de symboles
bonus: ${OBJS} ${OBJSBONUS}
	ar -rcs ${NAME} ${OBJS} ${OBJSBONUS}

# Rule to remove object files
clean:
	${RM} ${OBJS} ${OBJSBONUS}

# Rule to remoce object files and the lib
fclean: clean
	${RM} ${NAME}

# Rule to recompile everything
re: fclean all

# .PHONY target to avoid conflicts with files named 'bonus', 'all', 'clean', 'fclean', 're'
.PHONY: bonus all clean fclean re
