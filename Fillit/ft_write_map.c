/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 13:49:37 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 16:06:34 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int				ft_write_map(int size, int cur, char *map, t_tetri **list)
{
	t_tetri	*tetri;

	tetri = *list;
	ft_clear_map(map, tetri->letter);
	while (tetri)
	{
		while (map[cur] != '.' && map[cur] != '\0')
			cur++;
		if (!(ft_put_tetri(size, cur, map, tetri)))
		{
			if ((cur + 1) >= ((size * size) + size) && tetri->previous)
			{
				if (!(ft_backtrack(size, map, tetri->previous)))
					return (-1);
			}
			else if ((cur + 1) >= ((size * size) + size) && !tetri->previous)
				return (-1);
			else if ((cur = ft_backiter(size, cur, map, tetri)) == -1)
				return (-1);
		}
		tetri = ft_select_tetri(map, tetri);
		cur = 0;
		tetri = tetri->next;
	}
	return (1);
}
