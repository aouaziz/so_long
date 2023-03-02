/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animation_pt2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:11:58 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 21:46:25 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_mlx_m6(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/M/6.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}

void	ft_mlx_m7(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/M/7.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}

int	ft_et(void)
{
	exit(0);
}
