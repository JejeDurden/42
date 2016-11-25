/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:54:43 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/17 15:17:42 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check0(char *tetri)
{
	while (*tetri != '\n')
		tetri++;
	tetri++;
	return (ft_check_next_tetri_line(tetri));
}
