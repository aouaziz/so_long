/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:12:08 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/11 11:54:26 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int n)
{
	int		i;
	long	nn;

	nn = n;
	i = 0;
	if (nn < 0)
	{
		i += ft_putchar('-');
		nn *= -1;
	}
	if (nn > 9)
	{
		i += ft_putnbr(nn / 10);
		i += ft_putchar(nn % 10 + '0');
	}
	else
		i += ft_putchar(nn + '0');
	return (i);
}
