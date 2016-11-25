/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_third.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:40:01 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/23 14:19:14 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

char	*ft_put_third(int size, int cur, char *map, t_tetri *tetri)
{
	int		i;
	int		flag;

	i = cur + 1;
	flag = 0;
	while (flag < tetri->third[1] && map[i])
	{
		if (map[i] == '\n')
			flag++;
		i++;
	}
	if (map[i] == '\0')
		return (NULL);
	if (map[cur + ((size + 1) * flag) + (tetri->third[0])] == '.')
	{
		map[cur + ((size + 1) * flag) + (tetri->third[0])] = tetri->letter;
		return (map);
	}
	return (NULL);
}
