/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:05:54 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 15:22:38 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

t_tetri		*ft_select_tetri(char *map, t_tetri *tetri)
{
	int		i;
	char	letter;

	i = 0;
	letter = 'A';
	while (map[i])
	{
		if (map[i] != '.' && map[i] > letter)
			letter = map[i];
		i++;
	}
	while (tetri->letter != letter)
		tetri = tetri->previous;
	return (tetri);
}
