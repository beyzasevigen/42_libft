/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:11:52 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/28 14:59:36 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, int len)
{
    char *temp_dst;
    char *temp_src;
    int counter;

    temp_dst = (char *)dst;
    temp_src = (char *)src;
    counter = 0;
    if (src == '\0' && dst == '\0')
        return dst;
    if (temp_dst > temp_src)
    {
        while (len > 0)
        {
            temp_dst[len - 1] = temp_src[len - 1];
            len--;
        }
    } else
    {
        while (counter < len)
        {
            temp_dst[counter + 1] = temp_src[counter + 1];
        }
    }
    return (dst);
}