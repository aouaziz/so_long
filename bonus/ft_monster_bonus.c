/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monster_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 08:53:26 by aouaziz           #+#    #+#             */
/*   Updated: 2023/03/02 17:05:05 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_monster(t_so_long *s, int a)
{
	s->mx = 0;
	s->my = 0;
	while (s->map[s->mx])
	{
		while (s->map[s->mx][s->my])
		{
			if (s->map[s->mx][s->my] == 'M')
			{
				ft_mlx_anim(s, a);
				ft_check_move(s);
			}
			s->my++;
		}
		s->my = 0;
		s->mx++;
	}
}

void	ft_check_monster(int KeyPress, t_so_long *s)
{
	if (KeyPress == UP && s->map[s->px - 1][s->py] == 'M')
	{
		ft_lost_error();
		exit(0);
	}
	else if (KeyPress == LEFT && s->map[s->px][s->py - 1] == 'M')
	{
		ft_lost_error();
		exit(0);
	}
	else if (KeyPress == RIGHT && s->map[s->px][s->py + 1] == 'M')
	{
		ft_lost_error();
		exit(0);
	}
	else if (KeyPress == DOWN && s->map[s->px + 1][s->py] == 'M')
	{
		ft_lost_error();
		exit(0);
	}
}

void	ft_mlx_anim(t_so_long *s, int a)
{
	if (a == 1)
		ft_mlx_m(s->mlx_ptr, s->mlx_win, s->my, s->mx);
	else if (a == 2)
		ft_mlx_m2(s->mlx_ptr, s->mlx_win, s->my, s->mx);
	else if (a == 3)
		ft_mlx_m3(s->mlx_ptr, s->mlx_win, s->my, s->mx);
	else if (a == 4)
		ft_mlx_m4(s->mlx_ptr, s->mlx_win, s->my, s->mx);
	else if (a == 5)
		ft_mlx_m5(s->mlx_ptr, s->mlx_win, s->my, s->mx);
	else if (a == 6)
		ft_mlx_m6(s->mlx_ptr, s->mlx_win, s->my, s->mx);
	else if (a == 7)
	{
		ft_mlx_m7(s->mlx_ptr, s->mlx_win, s->my, s->mx);
	}
}

void	ft_check_move(t_so_long *s)
{
	static int	i;

	if (i == 100)
	{
		if (s->map[s->mx][s->my + 1] == '0' || s->map[s->mx][s->my + 1] == 'P')
		{
			if (s->map[s->mx][s->my + 1] == 'P')
				ft_lost_error();
			s->map[s->mx][s->my] = '0';
			ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->my, s->mx);
			s->map[s->mx][s->my + 1] = 'M';
		}
		else if ((s->map[s->mx][s->my - 1] == '0'
			|| s->map[s->mx][s->my - 1] == 'P'))
		{
			if (s->map[s->mx][s->my - 1] == 'P')
				ft_lost_error();
			s->map[s->mx][s->my] = '0';
			ft_mlx_bg(s->mlx_ptr, s->mlx_win, s->my, s->mx);
			s->map[s->mx][s->my - 1] = 'M';
		}
		i = 0;
	}
	else
		i++;
}

int	ft_animation(t_so_long *s)
{
	static int	a;

	a++;
	if (a == 500)
		ft_monster(s, 1);
	else if (a == 1000)
		ft_monster(s, 2);
	else if (a == 1500)
		ft_monster(s, 3);
	else if (a == 2000)
		ft_monster(s, 4);
	else if (a == 2500)
		ft_monster(s, 5);
	else if (a == 3000)
		ft_monster(s, 6);
	else if (a == 4000)
	{
		a = 0;
		ft_monster(s, 7);
	}
	return (0);
}
