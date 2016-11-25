/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 13:34:37 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/24 18:54:10 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

char	*ft_map(int size)
{
	int		i;
	char	*map;
	int		orig_size;

	i = 0;
	orig_size = size + 1;
	if (!(map = (char *)malloc(sizeof(map) * ((size * size) + size + 1))))
		return (NULL);
	while (i < size)
		map[i++] = '.';
	map[i++] = '\n';
	size += orig_size;
	while (i < (((orig_size - 1) * (orig_size - 1)) + orig_size - 1))
	{
		map[i] = '.';
		if (i == size)
		{
			map[i] = '\n';
			size += orig_size;
		}
		i++;
	}
	map[i] = '\0';
	return (map);
}
