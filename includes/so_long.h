/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:38:48 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 15:22:24 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../ft_printf/includes/ft_printf.h"
# include "../libft/includes/libft.h"
# include <mlx.h>

# define UP 126
# define LEFT 123
# define DOWN 125
# define RIGHT 124
# define ESC 53

typedef struct so_long
{
	int		x;
	int		y;
	int		fd;
	char	*str;
	char	*gnl;
	char	**map;
	char	*mape;
	char	**map_e;
	char	**map_cp;
	int		len;
	int		e;
	int		p;
	int		px;
	int		py;
	int		c;
	int		ct;
	void	*mlx_win;
	void	*mlx_ptr;
	int		i;
}			t_so_long;

void		ft_path_error(void);
void		ft_check_pec10(char *line);
void		ft_map_error(void);
void		ft_check_map_xy(char *map);
void		ft_flood_fill_cp(char **map, int x, int y);
void		ft_flood_fill_e(char **map, int x, int y);
void		ft_check_line(char *map);
void		ft_check_flood_cp(char **map);
void		ft_check_flood_e(char **map);
void		ft_check_pce(t_so_long *s);
void		ft_mlx(t_so_long *s);
void		ft_mlx_bg(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_wall(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_player(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_c(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_e(void *mlx_ptr, void *mlx_win, int x, int y);
int			ft_key(int KeyPress, t_so_long *s);
void		ft_up(t_so_long *s);
void		ft_down(t_so_long *s);
void		ft_right(t_so_long *s);
void		ft_left(t_so_long *s);
void		ft_image_error(void);
int			ft_check_exit(int KeyPress, t_so_long *s);
void		ft_win(void);
#endif
