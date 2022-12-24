/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 21:55:25 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/24 17:28:14 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

static size_t	ft_calculate_size(int n);
static char		*set_str(int is_negative, size_t str_size, int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	size_t	str_size;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		is_negative = 1;
	else
		is_negative = 0;
	if (is_negative)
		n = n * (-1);
	str_size = ft_calculate_size(n);
	if (is_negative)
		str_size++;
	str = set_str(is_negative, str_size, n);
	return (str);
}

static char	*set_str(int is_negative, size_t str_size, int n)
{
	size_t		limit;
	char		*str;

	str = (char *)ft_calloc((str_size + 1), sizeof(char));
	if (!str)
		return (NULL);
	limit = 0;
	if (is_negative)
		limit = 1;
	if (is_negative)
		str[0] = '-';
	while (str_size > limit)
	{
		str[str_size - 1] = (n % 10) + '0';
		n = n / 10;
		str_size--;
	}
	return (str);
}

static size_t	ft_calculate_size(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
