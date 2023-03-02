/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:26:05 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/11 11:54:28 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putp(unsigned long nn)
{
	char	*str;
	int		i;

	str = "0123456789abcdef";
	i = 0;
	if (nn > 15)
	{
		i += ft_putp(nn / 16);
		i += ft_putp(nn % 16);
	}
	else
		i += ft_putchar(str[nn]);
	return (i);
}
