/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:09:02 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/24 13:45:25 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_create_list(char **tabstr)
{
	int		ret;
	t_tetri	*list;

	ret = ft_check_tetri(tabstr);
	if (ret == -1)
		return (-1);
	list = ft_build_lst(tabstr);
	if (list == NULL)
		return (-1);
	free(tabstr);
	ret = ft_fillit(&list);
	if (ret == -1)
		return (-1);
	ft_free_list(&list);
	free(list);
	return (1);
}
