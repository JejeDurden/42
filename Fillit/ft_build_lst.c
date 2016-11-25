/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:05:51 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/24 11:30:49 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

t_tetri		*ft_build_lst(char **tabstr)
{
	char	letter;
	int		i;
	t_tetri	*tetrilst;
	t_tetri	*nxt;

	i = 0;
	letter = 'A';
	tetrilst = ft_lst_tetrinew(letter, ft_find1(tabstr[i]),
			ft_find2(tabstr[i]), ft_find3(tabstr[i]));
	letter++;
	free(tabstr[i]);
	i++;
	while (tabstr[i])
	{
		ft_lst_pushback(&tetrilst, ft_lst_tetrinew(letter, ft_find1(tabstr[i]),
					ft_find2(tabstr[i]), ft_find3(tabstr[i])));
		letter++;
		free(tabstr[i]);
		i++;
		nxt = tetrilst->next;
	}
	return (tetrilst);
}
