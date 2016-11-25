/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:22:50 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/23 19:15:13 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_list_size(t_tetri *list)
{
	int		i;

	i = 0;
	while (list->next)
	{
		i++;
		list = list->next;
	}
	return (i);
}
