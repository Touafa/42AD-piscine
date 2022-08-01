/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <wafatalha18@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:12:50 by otalha            #+#    #+#             */
/*   Updated: 2022/03/13 10:49:57 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y)
{
	int	c;
	int	r;

	if (x < 1 || y < 1)
		return ;
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c > 1 && c < x) && (r > 1 && r < y))
				ft_putchar(' ');
			else if ((c > 1 && c < x) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((r > 1 && r < y) && (c == 1 || c == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
