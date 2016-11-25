/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_hastag_pos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:00:28 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/18 13:45:42 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check_hashtag_pos(char *tetri, int *tab)
{
	int		i;

	i = 0;
	while (tab[i] != 0)
		i++;
	if (i == 0)
		return (ft_check0(tetri));
	if (i == 1)
		return (ft_check1((tab[0] - 1), tetri));
	if (i == 2)
		return (ft_check2((tab[0] - 1), (tab[1] - 1), tetri));
	if (i == 3)
		return (ft_check3((tab[0] - 1), (tab[1] - 1), (tab[2] - 1), tetri));
	if (i == 4)
		return (1);
	return (-1);
}
