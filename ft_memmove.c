/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:11:52 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/04 15:50:42 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dst;
	char	*temp_src;
	size_t	counter;

	temp_dst = (char *)dest;
	temp_src = (char *)src;
	counter = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	if (temp_dst > temp_src)
	{
		while (n-- > 0)
		{
			temp_dst[n] = temp_src[n];
		}
	}
	else
	{
		while (counter < n)
		{
			temp_dst[counter] = temp_src[counter];
			counter++;
		}
	}
	return (dest);
}
