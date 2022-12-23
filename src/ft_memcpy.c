/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 04:32:40 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/23 20:02:54 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*byte_dest;
	unsigned char	*byte_src;
	size_t			i;

	i = 0;
	byte_dest = (unsigned char *)dest;
	byte_src = (unsigned char *)src;
	while (i < n)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	dest = byte_dest;
	return ((void *)dest);
}
