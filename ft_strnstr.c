/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 21:26:49 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/01 17:12:03 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str_big;
	char	*str_little;

	str_big = (char *)big;
	str_little = (char *)little;
	i = 0;
	if (str_little[i] == '\0')
		return (str_big);
	while (str_big[i] && i < len)
	{
		j = 0;
		while ((str_big[i + j] == str_little[j])
			&& str_little[j] && (i + j) < len)
		{
			j++;
		}
		if (str_little[j] == '\0')
			return (&str_big[i]);
		i++;
	}
	return (0);
}
