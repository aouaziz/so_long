/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:05:41 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 15:26:06 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_up(t_so_long *s)
{
	s->px--;
	ft_move_counter(s);
	if (s->map[s->px][s->py] == 'E' && s->c == s->ct)
	{
		ft_win();
		exit(0);
	}
	else if (s->map[s->px][s->py] == '0' || s->map[s->px][s->py] == 'C'
			|| s->map[s->px][s->py] == 'P')
	{
		if (s->map[s->px][s->py] == 'C')
		{
			ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py, s->px);
			s->map[s->px][s->py] = '0';
			s->c++;
		}
		s->map[s->px][s->py] = 'P';
		s->map[s->px + 1][s->py] = '0';
		ft_mlx_player(s->mlx_ptr, s->mlx_win, s->py, s->px);
		ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py, s->px + 1);
	}
	else
		s->px++;
}

void	ft_move_counter(t_so_long *s)
{
	s->i++;
	s->move = ft_itoa(s->i);
	ft_mlx_wall(s->mlx_ptr, s->mlx_win, 0, 0);
	ft_mlx_wall(s->mlx_ptr, s->mlx_win, 1, 0);
	mlx_string_put(s->mlx_ptr, s->mlx_win, 0, 0, 0x0000ffff, "MOVE");
	mlx_string_put(s->mlx_ptr, s->mlx_win, 1 * 50, 0, 0x0000ffff, s->move);
	free(s->move);
}

void	ft_down(t_so_long *s)
{
	s->px++;
	ft_move_counter(s);
	if (s->map[s->px][s->py] == 'E' && s->c == s->ct)
	{
		ft_win();
		exit(0);
	}
	else if (s->map[s->px][s->py] == 'C' || s->map[s->px][s->py] == '0'
			|| s->map[s->px][s->py] == 'P')
	{
		if (s->map[s->px][s->py] == 'C')
		{
			ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py, s->px);
			s->map[s->px][s->py] = '0';
			s->c++;
		}
		s->map[s->px][s->py] = 'P';
		s->map[s->px - 1][s->py] = '0';
		ft_mlx_player(s->mlx_ptr, s->mlx_win, s->py, s->px);
		ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py, s->px - 1);
	}
	else
		s->px--;
}

void	ft_right(t_so_long *s)
{
	s->py++;
	ft_move_counter(s);
	if (s->map[s->px][s->py] == 'E' && s->c == s->ct)
	{
		ft_win();
		exit(0);
	}
	else if (s->map[s->px][s->py] == '0' || s->map[s->px][s->py] == 'C'
			|| s->map[s->px][s->py] == 'P')
	{
		if (s->map[s->px][s->py] == 'C')
		{
			ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py, s->px);
			s->map[s->px][s->py] = '0';
			s->c++;
		}
		s->map[s->px][s->py] = 'P';
		s->map[s->px][s->py - 1] = '0';
		ft_mlx_player(s->mlx_ptr, s->mlx_win, s->py, s->px);
		ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py - 1, s->px);
	}
	else
		s->py--;
}

void	ft_left(t_so_long *s)
{
	s->py--;
	ft_move_counter(s);
	if (s->map[s->px][s->py] == 'E' && s->c == s->ct)
	{
		ft_win();
		exit(0);
	}
	else if (s->map[s->px][s->py] == '0' || s->map[s->px][s->py] == 'C'
			|| s->map[s->px][s->py] == 'P')
	{
		if (s->map[s->px][s->py] == 'C')
		{
			ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py, s->px);
			s->map[s->px][s->py] = '0';
			s->c++;
		}
		s->map[s->px][s->py] = 'P';
		s->map[s->px][s->py + 1] = '0';
		ft_mlx_player(s->mlx_ptr, s->mlx_win, s->py, s->px);
		ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->py + 1, s->px);
	}
	else
		s->py++;
}
