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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char *temp_dst;
    char *temp_src;
    size_t counter;

    temp_dst = (char *)dest;
    temp_src = (char *)src;
    counter = 0;
    if (src == '\0' && dest == '\0')
        return dest;
    if (temp_dst > temp_src)
    {
        while (n > 0)
        {
            temp_dst[n - 1] = temp_src[n - 1];
            n--;
        }
    } else
    {
        while (counter < n)
        {
            temp_dst[counter + 1] = temp_src[counter + 1];
        }
    }
    return (dest);
}
