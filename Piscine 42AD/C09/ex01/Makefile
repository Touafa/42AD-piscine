# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otalha <wafatalha18@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 14:39:38 by otalha            #+#    #+#              #
#    Updated: 2022/03/28 15:59:08 by otalha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

INCLU = includes

LIBRC = ar rc

LIBRN = ranlib

CC = cc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o: 
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLU}

${NAME}: ${OBJS}
	     ${LIBRC} ${NAME} ${OBJS}
		 ${LIBRN} ${NAME}

all:     ${NAME}

clean: 
	     ${RM} ${OBJS}

fclean:  clean
	     ${RM} ${NAME}

re:      fclean all
