/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:52:54 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 15:25:26 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

int	ft_ber(char *c, int i)
{
	if (c[i - 1] == 'r' && c[i - 2] == 'e' && c[i - 3] == 'b'
		&& c[i - 4] == '.')
		return (1);
	else
		return (0);
}

void	ft_chek(char *line)
{
	t_so_long	t;

	t.mape = NULL;
	t.len = ft_strlen(line);
	t.fd = open(line, O_RDONLY);
	if (!t.len || !ft_ber(line, t.len) || !t.fd)
		ft_path_error();
	while (1)
	{
		t.gnl = get_next_line(t.fd);
		if (!t.gnl)
			break ;
		t.mape = get_strjoin(t.mape, t.gnl);
		free(t.gnl);
	}
	if (!t.mape)
		ft_map_error();
	ft_check_line(t.mape);
	ft_check_pecm10(t.mape);
	ft_check_map_xy(t.mape);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		ft_chek(av[1]);
	else
		ft_path_error();
}
