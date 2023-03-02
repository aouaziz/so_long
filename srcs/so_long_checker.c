/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:10:37 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/25 11:28:04 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_check_pec10(char *map)
{
	t_so_long	s;

	s.e = 0;
	s.p = 0;
	s.c = 0;
	s.x = 0;
	while (map[s.x])
	{
		if (map[s.x] == 'E' || map[s.x] == 'P' || map[s.x] == 'C'
			|| map[s.x] == '1' || map[s.x] == '0' || map[s.x] == '\n')
			s.x++;
		else
			ft_map_error();
		if (map[s.x] == 'E')
			s.e++;
		else if (map[s.x] == 'P')
			s.p++;
		else if (map[s.x] == 'C')
			s.c++;
	}
	if (s.e != 1 || s.p != 1 || s.c < 1)
		ft_map_error();
}

void	ft_check_line(char *map)
{
	t_so_long	s;

	s.len = 0;
	s.len = ft_strlen(map);
	if (ft_strnstr(map, "\n\n", s.len) || map[0] == '\n'
		|| map[s.len - 1] == '\n')
		ft_map_error();
}

void	ft_check_map_xy2(char *mape, int len)
{
	t_so_long	s;

	s.y = 0;
	s.len = 0;
	s.x = 0;
	s.map = ft_split(mape, '\n');
	while (s.map[s.x])
	{
		if (s.map[s.x][0] == '1' && s.map[s.x][len - 1] == '1')
			s.x++;
		else
			ft_map_error();
	}
	while (s.map[s.len])
	{
		s.len++;
	}
	while (s.map[s.len - 1][s.y])
	{
		if (s.map[s.len - 1][s.y] == '1')
			s.y++;
		else
			ft_map_error();
	}
	ft_free(s.map);
}

void	ft_check_map_xy(char *map)
{
	t_so_long	s;

	s.x = 0;
	s.y = 0;
	s.c = 0;
	s.map = ft_split(map, '\n');
	s.mape = map;
	s.len = ft_strlen(*s.map);
	while (s.map[s.y])
	{
		if (ft_strlen(s.map[s.y]) == s.len)
			s.y++;
		else
			ft_map_error();
	}
	while (s.map[s.c][s.x])
	{
		if (s.map[s.c][s.x] == '1')
			s.x++;
		else
			ft_map_error();
	}
	ft_check_map_xy2(s.mape, s.len);
	ft_check_pce(&s);
}

void	ft_check_pce(t_so_long *s)
{
	s->px = 0;
	s->py = 0;
	s->i = 1;
	s->map_cp = ft_split(s->mape, '\n');
	s->map_e = ft_split(s->mape, '\n');
	while (s->map[s->px])
	{
		while (s->map[s->px][s->py])
		{
			if (s->map[s->px][s->py] == 'P')
				break ;
			s->py++;
		}
		if (s->map[s->px][s->py] == 'P')
			break ;
		s->py = 0;
		s->px++;
	}
	ft_flood_fill_cp(s->map_cp, s->px, s->py);
	ft_flood_fill_e(s->map_e, s->px, s->py);
	ft_check_flood_cp(s->map_cp);
	ft_check_flood_e(s->map_e);
	ft_mlx(s);
}
