/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 21:55:25 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/24 00:44:45 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

static size_t	ft_calculate_str_size(int n);
static size_t	is_negative(int n);
static char		*make_str(char *str, int n, size_t digit);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = ft_calculate_str_size(n);
	if (is_negative(n))
		size++;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = make_str(str, n, size);
	return (str);
}

static size_t	ft_calculate_str_size(int n)
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

static size_t	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static char	*make_str(char *str, int n, size_t digit)
{
	size_t	first_char;

	first_char = 0;
	if (n < 0)
	{
		str[0] = '-';
		first_char = 1;
		n = -n;
	}
	while (digit > first_char)
	{
		str[digit - 1] = (n % 10) + '0';
		n = n / 10;
		digit--;
	}
	str[digit] = '\0';
	return (str);
}
