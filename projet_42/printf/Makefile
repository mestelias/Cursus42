# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmestou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 16:44:52 by elmestou          #+#    #+#              #
#    Updated: 2022/01/01 16:34:14 by elmestou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = utils/ft_putchar.c utils/ft_itoa.c utils/ft_putstr.c utils/ft_strdup.c \
	   utils/ft_strjoin.c utils/ft_strlen.c utils/ft_uitoa.c \
	   utils/ft_uitoa_base.c utils/ft_uitoa_uppercase.c \
	   parsing/set_data.c parsing/parse_conversion.c

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
