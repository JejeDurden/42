/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 18:33:28 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/21 13:58:50 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

void	ft_lst_pushback(t_tetri **tetrilst, t_tetri *tetrinew)
{
	t_tetri *list;

	list = *tetrilst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = tetrinew;
		tetrinew->previous = list;
	}
	else
		list = tetrinew;
}
