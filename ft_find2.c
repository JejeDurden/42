/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:26:50 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/22 14:19:47 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		*ft_find2(char *tabstr)
{
	int		i;
	int		j;
	int		y;
	int		*coord;
	int		flag;

	i = 0;
	y = 0;
	flag = 0;
	if (!(coord = (int *)malloc(sizeof(int) * 2)))
		return (NULL);
	while (tabstr[i] != '#')
		i++;
	j = i;
	while (flag < 2)
	{
		j++;
		if (tabstr[j] == '\n')
			y++;
		if (tabstr[j] == '#')
			flag++;
	}
	coord[0] = j - (i + (5 * y));
	coord[1] = y;
	return (coord);
}
