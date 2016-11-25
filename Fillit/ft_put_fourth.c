/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fourth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:40:01 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/23 10:41:45 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

char	*ft_put_fourth(int size, int cur, char *map, t_tetri *tetri)
{
	int		i;
	int		flag;

	i = cur + 1;
	flag = 0;
	while (flag < tetri->fourth[1] && map[i])
	{
		if (map[i] == '\n')
			flag++;
		i++;
	}
	if (map[i] == '\0')
		return (NULL);
	if (map[cur + ((size + 1) * flag) + (tetri->fourth[0])] == '.')
	{
		map[cur + ((size + 1) * flag) + (tetri->fourth[0])] = tetri->letter;
		return (map);
	}
	return (NULL);
}
