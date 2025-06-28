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

char *strnstr(const char *big, const char *little, size_t len)
{
    int		i;
	int		j;

	i = 0;
	if (little[i] == '\0')
		return (&big[i]);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return (0);
} //bunu düzenle