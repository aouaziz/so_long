/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:04:30 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/18 22:59:16 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	slen1;
	size_t	slen2;

	if ((!s1) || (!s2))
		return (0);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	r = malloc(slen1 + slen2 + 1);
	if (!r)
		return (0);
	if (r)
	{
		ft_memcpy(r, s1, slen1 + 1);
		ft_memcpy(r + slen1, s2, slen2 + 1);
	}
	return (r);
}
