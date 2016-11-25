/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:46:46 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/17 11:01:32 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check_lines(char **tabstr)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tabstr[i])
	{
		j = 0;
		while (tabstr[i][j] != '\0' && tabstr[i][j] != 127)
		{
			if (ft_valid_char(tabstr[i][j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}
