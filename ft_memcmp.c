/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:13:49 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/04 15:50:32 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1s;
	unsigned char	*s2s;

	i = 0;
	s1s = (unsigned char *)s1;
	s2s = (unsigned char *)s2;
	while (i < n)
	{
		if (s1s[i] != s2s[i])
		{
			return ((unsigned char)s1s[i] - (unsigned char)s2s[i]);
		}
		i++;
	}
	return (0);
}
