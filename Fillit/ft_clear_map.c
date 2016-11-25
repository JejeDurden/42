/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:24:36 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/23 13:27:17 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

void	ft_clear_map(char *map, char letter)
{
	int		i;

	i = 0;
	while (map[i])
	{
		if (map[i] == letter)
			map[i] = '.';
		i++;
	}
}
