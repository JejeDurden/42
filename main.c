/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:07:49 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/17 12:31:26 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fillit.h"

int		main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		ft_putstr("usage : fillit tetriminos_file\n");
		return (1);
	}
	fd = ft_reader(open(argv[1], O_RDONLY));
	if (fd == -1)
	{
		ft_putstr("error\n");
		return (1);
	}
	return (1);
}
