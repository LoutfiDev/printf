# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:27:02 by yloutfi           #+#    #+#              #
#    Updated: 2022/11/03 14:57:40 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printchar.c ft_printnbr.c 	\
	ft_printstr.c ft_print_address.c ft_print_hex.c \
	ft_print_hexa.c ft_print_unsigned.c


OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ""		

BONUS_OBJS = ""
	
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc

all : $(NAME)

# bonus : $(BONUS_OBJS)
# 	ar rc $(NAME) $(BONUS_OBJS)
	
$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	-rm -f $(OBJS) $(BONUS_OBJS)
		
fclean : clean
	-rm -f $(NAME)

re : fclean	all

.PHONY : all bonus clean fclean re