/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:27:16 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/30 21:41:27 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = 0;
	x = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (i >= dstsize)
		return (dstsize + j);
	while (src[x] && (i + x) < dstsize - 1)
	{
		dst[i + x] = src[x];
		x++;
	}
	dst[i + x] = '\0';
	return (i + j);
}
