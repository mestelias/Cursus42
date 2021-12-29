# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 14:43:54 by elmestou          #+#    #+#              #
#    Updated: 2021/12/29 10:47:43 by elmestou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./ft_atoi.c ./ft_isascii.c ./ft_memcmp.c ./ft_putendl_fd.c ./ft_strdup.c ./ft_strlen.c \
	   ./ft_strtrim.c ./ft_bzero.c ./ft_isdigit.c ./ft_memcpy.c ./ft_putnbr_fd.c ./ft_striteri.c  \
	   ./ft_strmapi.c ./ft_substr.c ./ft_calloc.c ./ft_isprint.c ./ft_memmove.c ./ft_putstr_fd.c \
	   ./ft_strjoin.c ./ft_strncmp.c ./ft_tolower.c ./ft_isalnum.c ./ft_itoa.c ./ft_memset.c ./ft_split.c \
	   ./ft_strlcat.c ./ft_strnstr.c ./ft_toupper.c ./ft_isalpha.c ./ft_memchr.c ./ft_putchar_fd.c \
	   ./ft_strchr.c ./ft_strlcpy.c ./ft_strrchr.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

INCLUDES= ./libft.h

%.c.o:
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
