/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:47:09 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/24 11:29:34 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		ft_reader(int fd)
{
	char	*buf;
	int		ret;
	char	**tabstr;
	int		i;
	int		temp;

	buf = ft_strnew(21);
	if (fd == -1)
		return (-1);
	i = 0;
	if (!(tabstr = (char **)malloc(sizeof(char *) * 26)))
		return (-1);
	while ((ret = read(fd, buf, 21)))
	{
		temp = ret;
		tabstr[i++] = ft_strdup(buf);
	}
	if (temp != 20 || ret != 0)
		return (-1);
	tabstr[i] = NULL;
	ret = ft_create_list(tabstr);
	if (ret == -1)
		return (-1);
	free(buf);
	return (1);
}
