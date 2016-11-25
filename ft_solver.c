/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 13:22:08 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 10:56:22 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_solver(int size, t_tetri **list)
{
	char	*map;
	int		ret;
	int		cur;

	cur = 0;
	map = ft_map(size);
	if (!map)
		return (-1);
	ret = ft_write_map(size, cur, map, list);
	if (ret == -1)
	{
		free(map);
		return (ft_solver(size + 1, list));
	}
	ft_putstr(map);
	free(map);
	return (1);
}
