/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:45:24 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/24 00:50:06 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char    *str1 = "\0";
    char    *str2 = "\0"; 
    int     n;

    // str1 = NULL;
    // str2 = NULL;
    if (!str1)
        return (0);
    n = memcmp(str1, str2, 1);
    printf("%d\n", n);
}
