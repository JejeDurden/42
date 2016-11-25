/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:22:49 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/24 13:16:18 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		*ft_find1(char *tabstr)
{
	int		i;
	int		j;
	int		y;
	int		*coord;

	i = 0;
	y = 0;
	if (!(coord = (int *)malloc(sizeof(int) * 2)))
		return (NULL);
	while (tabstr[i] != '#')
		i++;
	j = i + 1;
	while (tabstr[j] != '#')
	{
		if (tabstr[j] == '\n')
			y++;
		j++;
	}
	coord[0] = j - (i + (5 * y));
	coord[1] = y;
	return (coord);
}
