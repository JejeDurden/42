/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:51:51 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/18 13:37:46 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

static int	ft_flag_one(int one, int two, char *tetri)
{
	int i;

	i = 5;
	while (tetri[i] != '#')
		i++;
	if ((i - 5) != one)
	{
		if ((i - 5) != two)
			return (0);
	}
	if (tetri[i + 5] != '#')
		return (0);
	return (1);
}

static int	ft_flag_two(int one, int two, char *tetri)
{
	int i;

	i = 5;
	while (tetri[i] != '\n')
	{
		if ((tetri[i] == '#') && (tetri[i + 1] == '#'))
		{
			if (((i - 5) == one && (i - 4) == two) ||
				((i - 6) == one && (i - 5) == two) ||
				((i - 4) == one && (i - 3) == two))
				return (1);
		}
		i++;
	}
	return (0);
}

int			ft_check2(int one, int two, char *tetri)
{
	int		i;
	int		flag;

	i = 5;
	flag = 0;
	while (tetri[i] != '\n')
	{
		if (tetri[i] == '#')
			flag++;
		i++;
	}
	if (flag == 0)
		return (0);
	if (flag == 1)
		return (ft_flag_one(one, two, tetri));
	if (flag == 2)
		return (ft_flag_two(one, two, tetri));
	return (0);
}
