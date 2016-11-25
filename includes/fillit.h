/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:02:49 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/25 15:21:08 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct		s_tetri
{
	char			letter;
	int				*second;
	int				*third;
	int				*fourth;
	struct s_tetri	*next;
	struct s_tetri	*previous;
}					t_tetri;

int					ft_reader(int fd);
int					ft_create_list(char **tabstr);
int					ft_check_lines(char **tabstr);
int					ft_valid_char(char c);
int					ft_check_tetri(char **tabstr);
int					ft_check_size(char **tabstr);
int					ft_check_first_tetri_line(char **tabstr);
int					ft_check_hashtag_pos(char *tetri, int *tab);
int					ft_check0(char *tetri);
int					ft_check1(int one, char *tetri);
int					ft_check2(int one, int two, char *tetri);
int					ft_check3(int one, int two, int three, char *tetri);
int					ft_check_next_tetri_line(char *tetri);
int					ft_check_reader(char **tabstr);
t_tetri				*ft_build_lst(char **tabstr);
t_tetri				*ft_lst_tetrinew(char letter, int *find1,
													int *find2, int *find3);
int					*ft_find1(char *tabstr);
int					*ft_find2(char *tabstr);
int					*ft_find3(char *tabstr);
void				ft_lst_pushback(t_tetri **tetrilst, t_tetri *lstnew);
int					ft_fillit(t_tetri **list);
int					ft_solver(int size, t_tetri **list);
char				*ft_map(int size);
int					ft_write_map(int size, int cur, char *map, t_tetri **list);
int					ft_put_tetri(int size, int cur, char *map,
															t_tetri *tetri);
char				*ft_put_second(int size, int cur, char *map,
															t_tetri *tetri);
char				*ft_put_third(int size, int cur, char *map, t_tetri *tetri);
char				*ft_put_fourth(int size, int cur, char *map,
														t_tetri *tetri);
void				ft_clear_map(char *map, char letter);
int					ft_list_size(t_tetri *list);
int					ft_sqrt(int nb);
void				ft_free_list(t_tetri **list);
int					ft_backtrack(int size, char *map, t_tetri *prev_tetri);
int					ft_backiter(int size, int cur, char *map, t_tetri *tetri);
int					ft_iter(int size, int cur, char *map, t_tetri *tetri);
t_tetri				*ft_select_tetri(char *map, t_tetri *tetri);

#endif
