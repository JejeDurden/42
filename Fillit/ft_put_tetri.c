/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:04:46 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 13:28:33 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_put_tetri(int size, int cur, char *map, t_tetri *tetri)
{
	if (cur >= (int)ft_strlen(map))
		return (0);
	ft_clear_map(map, tetri->letter);
	if (!(ft_put_second(size, cur, map, tetri)))
		return (0);
	if (!(ft_put_third(size, cur, map, tetri)))
		return (0);
	if (!(ft_put_fourth(size, cur, map, tetri)))
		return (0);
	return (1);
}
