/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:21:46 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/24 13:46:46 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

void	ft_free_list(t_tetri **list)
{
	t_tetri		*tetri;

	tetri = *list;
	if (tetri->next != NULL)
		ft_free_list(&tetri->next);
	tetri->letter = '\0';
	free(tetri->second);
	free(tetri->third);
	free(tetri->fourth);
	ft_memdel((void **)list);
}
