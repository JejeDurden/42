/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_tetrinew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 18:45:40 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/24 13:29:02 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

t_tetri	*ft_lst_tetrinew(char letter, int *find1, int *find2, int *find3)
{
	t_tetri *tetri;

	if (!(tetri = (t_tetri*)malloc(sizeof(*tetri))))
		return (NULL);
	tetri->letter = letter;
	tetri->second = find1;
	tetri->third = find2;
	tetri->fourth = find3;
	tetri->next = NULL;
	tetri->previous = NULL;
	return (tetri);
}
