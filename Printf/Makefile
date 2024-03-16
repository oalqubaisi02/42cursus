# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oalqubai <oalqubai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 21:40:38 by oalqubai          #+#    #+#              #
#    Updated: 2024/03/16 00:07:30 by oalqubai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_printf.c hexaPointer.c putFunctions.c

OBJS = $(SRCS:.c=.o)

INC = -I.

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAG) $(INC) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re:
		fclean all