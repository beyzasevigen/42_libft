/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 21:26:49 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/28 21:30:00 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t		i;
	size_t		j;

	i = 0;
	if (little[i] == '\0')
		return (&big[i]);
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && little[j] && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return (0);
} //bunu düzenle