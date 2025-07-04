/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:43:56 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/04 15:52:26 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		last;
	char	*tmp;

	tmp = (char *)s;
	last = ft_strlen(s);
	while (last >= 0)
	{
		if (tmp[last] == (char)c)
			return (&tmp[last]);
		last--;
	}
	return (NULL);
}
