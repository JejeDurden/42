/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:33:56 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/25 10:43:04 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_flag_one(int one, char *tetri)
{
	int		i;

	i = 5;
	while (tetri[i] != '#')
		i++;
	if ((i - 5) != one)
		return (0);
	if (tetri[i + 5] != '#')
		return (0);
	if (tetri[i + 5] == '#')
	{
		if ((tetri[i + 4] != '#') && (tetri[i + 6] != '#')
				&& (tetri[i + 10] != '#'))
			return (0);
	}
	return (1);
}

int		ft_flag_two(int one, char *tetri)
{
	int		i;

	i = 5;
	while (tetri[i] != '\n')
	{
		if (tetri[i] == '#' && tetri[i + 1] == '#')
		{
			if (((i - 5) == one && tetri[i + 5] == '#') ||
				((i - 4) == one && tetri[i + 6] == '#') ||
				((i - 5) == one && tetri[i + 6] == '#') ||
				((i - 4) == one && tetri[i + 5] == '#'))
				return (1);
		}
		i++;
	}
	return (0);
}

int		ft_flag_three(int one, char *tetri)
{
	int		i;

	i = 5;
	while (tetri[i] == '#')
		i++;
	i -= 5;
	if (i == one)
		return (0);
	return (1);
}

int		ft_check1(int one, char *tetri)
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
		return (ft_flag_one(one, tetri));
	if (flag == 2)
		return (ft_flag_two(one, tetri));
	if (flag == 3)
		return (ft_flag_three(one, tetri));
	return (0);
}
