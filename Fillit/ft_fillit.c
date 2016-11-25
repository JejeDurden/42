/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 13:09:23 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/24 16:40:56 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_fillit(t_tetri **list)
{
	int		size;
	int		ret;

	size = ft_sqrt(ft_list_size(*list) * 4);
	ret = ft_solver(size + 1, list);
	if (ret == -1)
		return (-1);
	return (1);
}
