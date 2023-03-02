/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_e_c_0_1_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:33:50 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/27 11:42:17 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_mlx_wall(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_wall;

	mlx_wall = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/1and0/1.xpm", &s.y,
			&s.x);
	if (mlx_wall == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_wall, x * 50, y * 50);
}

void	ft_mlx_player(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_player;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_player = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/P/P.xpm", &s.x,
			&s.y);
	if (mlx_player == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_player, x * 50, y * 50);
}

void	ft_mlx_bg(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_bg;

	mlx_bg = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/1and0/0.xpm", &s.x,
			&s.y);
	if (mlx_bg == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_bg, x * 50, y * 50);
}

void	ft_mlx_c(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_c;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_c = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/C/C.xpm", &s.x, &s.y);
	if (mlx_c == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_c, x * 50, y * 50);
}

void	ft_mlx_e(void *mlx_ptr, void *mlx_win, int x, int y)
{
	t_so_long	s;
	void		*mlx_e;

	ft_mlx_bg(mlx_ptr, mlx_win, x, y);
	mlx_e = mlx_xpm_file_to_image(mlx_ptr, "./assets/XPM/E/E.xpm", &s.x, &s.y);
	if (mlx_e == NULL)
		ft_image_error();
	mlx_put_image_to_window(mlx_ptr, mlx_win, mlx_e, x * 50, y * 50);
}
