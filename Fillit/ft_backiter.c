/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:34:08 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 15:52:44 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_backiter(int size, int cur, char *map, t_tetri *tetri)
{
	int		ret;

	ret = 0;
	while ((cur + 1 <= ((size * size) + size)) && ret == 0)
	{
		ret = ft_iter(size, cur, map, tetri);
		cur++;
	}
	if (ret == 0 && tetri->previous)
		return (ft_backtrack(size, map, tetri->previous));
	else if (ret == 0 && !tetri->previous)
		return (-1);
	return (cur);
}
