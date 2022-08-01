/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <wafatalha18@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:53:11 by otalha            #+#    #+#             */
/*   Updated: 2022/03/26 15:19:35 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;
	int		*p;
	int		range;

	if (min >= max)
		return (0);
	range = max - min;
	p = (tab = malloc(range * sizeof(int)));
	if (!p)
		return (0);
	i = 0;
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
