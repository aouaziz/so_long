/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:54:43 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/28 15:22:29 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_path_error(void)
{
	ft_printf("\033[91m%s", "something wrong with the path (ㆆ_ㆆ)!!!");
	exit(1);
}

void	ft_map_error(void)
{
	ft_printf("\033[91m%s", "something wrong with map (⌐■_■)!!!");
	exit(1);
}

void	ft_image_error(void)
{
	ft_printf("\033[91m%s", "something wrong with path (≖_≖ )!!!");
	exit(1);
}

void	ft_win(void)
{
	ft_printf("\033[94m%s", "congratulations you win ʕ•́ᴥ•̀ʔっ!!!");
	exit(1);
}
