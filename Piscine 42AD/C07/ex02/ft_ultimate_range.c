/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <wafatalha18@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:53:43 by otalha            #+#    #+#             */
/*   Updated: 2022/03/26 15:26:54 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;
	int		*p;
	int		bound;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	p = (tab = malloc(bound * sizeof(int)));
	if (!p)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < bound)
	{
		tab[i] = min + i;
		i++;
	}
	return (bound);
}
