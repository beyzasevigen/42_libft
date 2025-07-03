/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:11:46 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/03 21:29:32 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp_dst;
	char	*temp_src;

	if (!dest && !src)
		return (NULL);
	temp_dst = (char *)dest;
	temp_src = (char *)src;
	while (n)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
		n--;
	}
	return (dest);
}
