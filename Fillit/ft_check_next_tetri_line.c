/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_next_tetri_line.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:14:26 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/23 16:59:18 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check_next_tetri_line(char *tetri)
{
	int		i;
	int		*tab_line_one;
	int		tabsize;

	i = 0;
	tabsize = 0;
	if ((tab_line_one = (int *)malloc(sizeof(int) * 5)) == 0)
		return (0);
	while (tetri[i] != '\n')
	{
		if (tetri[i] == '#')
			tab_line_one[tabsize++] = i + 1;
		i++;
	}
	tab_line_one[tabsize] = 0;
	if (ft_check_hashtag_pos(tetri, tab_line_one) <= 0)
		return (-1);
	free(tab_line_one);
	return (1);
}
