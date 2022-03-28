# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmestou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 16:44:52 by elmestou          #+#    #+#              #
#    Updated: 2022/03/21 14:54:15 by elmestou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	   utils/ft_putchar.c utils/ft_itoa.c utils/ft_putstr.c utils/ft_strdup.c \
	   utils/ft_strjoin.c utils/ft_strlen.c utils/ft_uitoa.c \
	   utils/ft_uitoa_base.c utils/ft_uitoa_uppercase.c \
	   parsing/set_data.c parsing/parse_conversion.c \
	   display/ft_print_conversion.c display/conversion_%/ft_convert_pourcent.c \
	   display/conversion_u/ft_convert_u.c display/conversion_d_i/ft_convert_d_i.c \
	   display/conversion_c/ft_convert_c.c display/conversion_x/ft_convert_x.c \
	   display/conversion_p/ft_convert_p.c display/conversion_s/ft_convert_s.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

INCLUDES= ./printf.h

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
