/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:38:48 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 21:43:16 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

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
	int		mx;
	int		my;
	int		c;
	int		ct;
	void	*mlx_win;
	void	*mlx_ptr;
	int		i;
	char	*move;
}			t_so_long;

void		ft_path_error(void);
void		ft_check_pecm10(char *line);
void		ft_map_error(void);
void		ft_check_map_xy(char *map);
void		ft_flood_fill_cpm(char **map, int x, int y);
void		ft_flood_fill_e(char **map, int x, int y);
void		ft_check_line(char *map);
void		ft_check_flood_cpm(char **map);
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
void		ft_monster(t_so_long *s, int a);
void		ft_mlx_m(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_check_monster(int KeyPress, t_so_long *s);
void		ft_lost_error(void);
void		ft_win(void);
void		ft_mlx_m2(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_m3(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_m4(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_m5(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_m6(void *mlx_ptr, void *mlx_win, int x, int y);
void		ft_mlx_m7(void *mlx_ptr, void *mlx_win, int x, int y);
int			ft_animation(t_so_long *s);
void		ft_mlx_anim(t_so_long *s, int a);
void		ft_check_move(t_so_long *s);
void		ft_move_counter(t_so_long *s);
int			ft_et(void);
#endif
