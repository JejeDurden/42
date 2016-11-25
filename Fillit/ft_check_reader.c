/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_reader.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:31:45 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/18 14:53:34 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check_reader(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i])
	{
		if (tabstr[i + 1] != NULL)
		{
			if ((tabstr[i][20] != '\n'))
				return (-1);
		}
		i++;
	}
	return (1);
}
