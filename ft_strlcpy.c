/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 21:20:59 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/28 21:56:01 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len_src;
    size_t i;

    i = 0;
    len_src = ft_strlen(src);
    if (dstsize > len_src + 1)
    {
        while (src[i])
        {
            dst[i] = src[i];
            i++;
        }
    }
    else
    {
        
    }
}