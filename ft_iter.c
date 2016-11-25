/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:36:27 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 11:37:30 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_iter(int size, int cur, char *map, t_tetri *tetri)
{
	int		ret;

	ft_clear_map(map, tetri->letter);
	while (map[cur] != '.' && map[cur] != '\0')
		cur++;
	ret = ft_put_tetri(size, cur, map, tetri);
	return (ret);
}
