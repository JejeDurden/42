/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:24:03 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 15:05:36 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_backtrack(int size, char *map, t_tetri *prev_tetri)
{
	int		cur;

	cur = 0;
	while (map[cur] != prev_tetri->letter)
		cur++;
	cur++;
	while (map[cur] == '\n')
		cur++;
	return (ft_backiter(size, cur, map, prev_tetri));
}
