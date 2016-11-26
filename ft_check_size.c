/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:13:59 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/18 15:02:19 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check_size(char **tabstr)
{
	int		i;
	int		j;
	int		hashtag;
	int		backslash_n;

	i = -1;
	while (tabstr[++i] != NULL)
	{
		j = -1;
		hashtag = 0;
		backslash_n = 0;
		while (tabstr[i][++j])
		{
			if (tabstr[i][j] == '#')
				hashtag++;
			if (tabstr[i][j] == '\n')
				backslash_n++;
		}
		if (hashtag != 4 || backslash_n != 5)
		{
			if (tabstr[i + 1] != NULL)
				return (-1);
			if (tabstr[i + 1] == NULL && (hashtag != 4 || backslash_n != 4))
				return (-1);
		}
	}
	return (1);
}
