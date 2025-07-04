/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 19:42:04 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/04 15:53:03 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_substr_len(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	new_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (0);
	new_len = s_len - start;
	if (len > new_len)
		return (new_len);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	copy_len;

	if (!s)
		return (NULL);
	copy_len = get_substr_len(s, start, len);
	substr = malloc(copy_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < copy_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
