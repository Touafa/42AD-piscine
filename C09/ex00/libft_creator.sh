# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otalha <wafatalha18@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:18:56 by otalha            #+#    #+#              #
#    Updated: 2022/03/28 15:45:50 by otalha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o
ranlib libft.a
