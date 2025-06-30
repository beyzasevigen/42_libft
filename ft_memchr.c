/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 20:13:36 by bsevigen            #+#    #+#             */
/*   Updated: 2025/06/29 20:13:36 by bsevigen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *s1;
    unsigned char c1;
    size_t i;

    i = 0;
    s1 = (char*)s;
    c1 = (char)c;
    while (i < n)
    {
        if (s1[i] == c1)
            return ((void*) &s1[i]);
        i++;
    }
    return (NULL);
}
