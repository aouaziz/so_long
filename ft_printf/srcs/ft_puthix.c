/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:02:41 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/11 11:54:23 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthix(unsigned int nn, char c)
{
	char	*str;
	int		i;

	i = 0;
	if (c == 'x')
		str = "0123456789abcdef";
	else if (c == 'X')
		str = "0123456789ABCDEF";
	if (nn > 15)
	{
		i += ft_puthix(nn / 16, c);
		i += ft_puthix(nn % 16, c);
	}
	else
		i += ft_putchar(str[nn]);
	return (i);
}
