# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 14:43:54 by elmestou          #+#    #+#              #
#    Updated: 2021/09/26 15:39:40 by elmestou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./ft_atoi.c ./ft_isalpha.c ./ft_isprint.c ./ft_memset.c ./ft_strlcpy.c ./ft_strrchr.c \
	   ./ft_bzero.c ./ft_isascii.c ./ft_memcpy.c ./ft_strchr.c ./ft_strlen.c ./ft_tolower.c \
	   ./ft_isalnum.c ./ft_isdigit.c ./ft_strlcat.c ./ft_strncmp.c ./ft_toupper.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

INCLUDES= ./includes

.c.o:
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
