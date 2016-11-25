/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:23:53 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/23 08:45:06 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_check_tetri(char **tabstr)
{
	int		ret;

	ret = ft_check_reader(tabstr);
	if (ret == -1)
		return (-1);
	ret = ft_check_lines(tabstr);
	if (ret == -1)
		return (-1);
	ret = ft_check_size(tabstr);
	if (ret == -1)
		return (-1);
	ret = ft_check_first_tetri_line(tabstr);
	if (ret == -1)
		return (-1);
	return (1);
}
