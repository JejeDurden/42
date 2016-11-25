/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:34:29 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/24 13:52:18 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check3(int one, int two, int three, char *tetri)
{
	int		i;

	i = 0;
	while (tetri[i] != '.')
		i++;
	if (i > 0)
	{
		if (tetri[i - 1] == '#' && tetri[i + 1] == '#')
			return (0);
	}
	i = 5;
	while (tetri[i] != '\n' && tetri[i] != '#')
		i++;
	i -= 5;
	return ((i == one) || (i == two) || (i == three));
}
