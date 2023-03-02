/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_path_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:20:34 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 15:23:21 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_check_flood_cpm(char **map)
{
	t_so_long	s;

	s.p = 0;
	s.c = 0;
	s.x = 0;
	s.y = 0;
	s.mx = 0;
	while (map[s.x])
	{
		while (map[s.x][s.y])
		{
			if (map[s.x][s.y] == 'P')
				s.p++;
			else if (map[s.x][s.y] == 'C')
				s.c++;
			else if (map[s.x][s.y] == 'M')
				s.mx++;
			s.y++;
		}
		s.y = 0;
		s.x++;
	}
	if (s.p > 0 || s.c > 0 || s.mx > 0)
		ft_map_error();
}

void	ft_check_flood_e(char **map)
{
	t_so_long	s;

	s.e = 0;
	s.x = 0;
	while (map[s.x])
	{
		while (map[s.x][s.y])
		{
			if (map[s.x][s.y] == 'E')
				s.e++;
			s.y++;
		}
		s.y = 0;
		s.x++;
	}
	if (s.e > 0)
		ft_map_error();
}

void	ft_flood_fill_cpm(char **map, int x, int y)
{
	while (map[x][y])
	{
		if (map[x][y] == '0' || map[x][y] == 'P' || map[x][y] == 'C'
			|| map[x][y] == 'M')
		{
			map[x][y] = 'X';
			ft_flood_fill_cpm(map, x + 1, y);
			ft_flood_fill_cpm(map, x - 1, y);
			ft_flood_fill_cpm(map, x, y + 1);
			ft_flood_fill_cpm(map, x, y - 1);
		}
		else
			return ;
	}
}

void	ft_flood_fill_e(char **map, int x, int y)
{
	while (map[x][y])
	{
		if (map[x][y] == '0' || map[x][y] == 'E' || map[x][y] == 'C'
			|| map[x][y] == 'P')
		{
			map[x][y] = 'X';
			ft_flood_fill_e(map, x + 1, y);
			ft_flood_fill_e(map, x - 1, y);
			ft_flood_fill_e(map, x, y + 1);
			ft_flood_fill_e(map, x, y - 1);
		}
		else
			return ;
	}
}
