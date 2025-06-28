/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:11:46 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/28 15:08:55 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, int n)
{
    char *temp_dst;
    char *temp_src;

    temp_dst = (char *)dst;
    temp_src = (char *)src;
    if (src == '\0' && dst == '\0')
        return dst;
    while (temp_dst =! '\0' && n)
    {
        *temp_dst = *temp_src;
        temp_dst++;
        temp_src++;
        n--;
    }
    return (dst);
}