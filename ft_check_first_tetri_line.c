/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_first_tetri_line.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:13:11 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/23 16:55:29 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int			ft_check_first_tetri_line(char **tabstr)
{
	int		i;
	int		j;
	int		*tab_line_one;
	int		tabsize;

	i = 0;
	if (!(tab_line_one = malloc(sizeof(int) * 5)))
		return (0);
	while (tabstr[i] != NULL)
	{
		tabsize = 0;
		j = 0;
		while (tabstr[i][j] != '\n')
		{
			if (tabstr[i][j] == '#')
				tab_line_one[tabsize++] = j + 1;
			j++;
		}
		tab_line_one[tabsize] = 0;
		if (ft_check_hashtag_pos(tabstr[i], tab_line_one) <= 0)
			return (-1);
		i++;
	}
	free(tab_line_one);
	return (1);
}
