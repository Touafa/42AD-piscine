/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <wafatalha18@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:54:21 by otalha            #+#    #+#             */
/*   Updated: 2022/03/26 18:26:08 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	final_len(char **strings, int size, int sep_len)
{
	int	i;
	int	f_len;

	i = 0;
	f_len = 0;
	while (i < size)
	{
		f_len += ft_strlen(strings[i]);
		f_len += sep_len;
		i++;
	}
	f_len -= sep_len;
	return (f_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	char	*p;
	int		total_len;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = final_len(strs, size, ft_strlen(sep));
	p = (string = (char *)malloc((total_len + 1) * sizeof(char)));
	if (!p)
		return (0);
	while (i < size)
	{
		ft_strcat(p, strs[i]);
		p += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcat(p, sep);
			p += ft_strlen(sep);
		}
		i++;
	}
	*p = '\0';
	return (string);
}
