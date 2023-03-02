/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:08:04 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 21:47:28 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_mlx_m(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/M/1.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}

void	ft_mlx_m2(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/M/2.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}

void	ft_mlx_m3(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/M/3.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}

void	ft_mlx_m4(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/M/4.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}

void	ft_mlx_m5(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/M/5.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}
