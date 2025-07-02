/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:15:22 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/02 18:11:55 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	int		i;

	tmp = malloc(ft_strlen (s1) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tmp [i] = s1[i];
		i++;
	}
	tmp [i] = '\0';
	return (tmp);
}
