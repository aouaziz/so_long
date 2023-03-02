/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 04:51:23 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 21:46:18 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

static void	ft_check_what2(t_so_long *s)
{
	if (s->map[s->y][s->x] == '1')
		ft_mlx_wall(s->mlx_ptr, s->mlx_win, s->x, s->y);
	else if (s->map[s->y][s->x] == 'P')
		ft_mlx_player(s->mlx_ptr, s->mlx_win, s->x, s->y);
	else if (s->map[s->y][s->x] == 'C')
	{
		ft_mlx_c(s->mlx_ptr, s->mlx_win, s->x, s->y);
		s->ct++;
	}
	else if (s->map[s->y][s->x] == '0')
		ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->x, s->y);
	else if (s->map[s->y][s->x] == 'E')
		ft_mlx_e(s->mlx_ptr, s->mlx_win, s->x, s->y);
	else if (s->map[s->y][s->x] == 'M')
		ft_mlx_m(s->mlx_ptr, s->mlx_win, s->x, s->y);
}

void	ft_check_what(t_so_long *s)
{
	s->y = 0;
	s->ct = 0;
	while (s->map[s->y])
	{
		s->x = 0;
		while (s->map[s->y][s->x])
		{
			ft_check_what2(s);
			s->x++;
		}
		s->y++;
	}
}

int	ft_key(int KeyPress, t_so_long *s)
{
	ft_check_monster(KeyPress, s);
	if (!ft_check_exit(KeyPress, s))
		return (0);
	else if (KeyPress == ESC)
	{
		mlx_destroy_window(s->mlx_ptr, s->mlx_win);
		exit(0);
	}
	else if (KeyPress == UP && s->map[s->px - 1][s->py] != '1')
		ft_up(s);
	else if (KeyPress == LEFT && s->map[s->px][s->py - 1] != '1')
		ft_left(s);
	else if (KeyPress == RIGHT && s->map[s->px][s->py + 1] != '1')
		ft_right(s);
	else if (KeyPress == DOWN && s->map[s->px + 1][s->py] != '1')
		ft_down(s);
	return (0);
}

int	ft_check_exit(int KeyPress, t_so_long *s)
{
	if (KeyPress == UP && s->map[s->px - 1][s->py] == 'E' && s->c < s->ct)
		return (0);
	else if (KeyPress == LEFT && s->map[s->px][s->py - 1] == 'E'
			&& s->c < s->ct)
		return (0);
	else if (KeyPress == RIGHT && s->map[s->px][s->py + 1] == 'E'
			&& s->c < s->ct)
		return (0);
	else if (KeyPress == DOWN && s->map[s->px + 1][s->py] == 'E'
			&& s->c < s->ct)
		return (0);
	return (1);
}

void	ft_mlx(t_so_long *s)
{
	int	i;

	s->mlx_ptr = mlx_init();
	s->mlx_win = mlx_new_window(s->mlx_ptr, s->x * 50, s->y * 50, "so_long");
	if (s->mlx_win == NULL)
		ft_image_error();
	ft_check_what(s);
	i = mlx_hook(s->mlx_win, 2, 0, ft_key, s);
	if (i == -1)
		ft_map_error();
	mlx_hook(s->mlx_win, 17, 0, ft_et, s);
	mlx_loop_hook(s->mlx_ptr, ft_animation, s);
	mlx_loop(s->mlx_ptr);
}
