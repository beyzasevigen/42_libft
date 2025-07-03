/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 20:11:13 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/03 21:04:06 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	int		i;
	int		j;
	char	*temp_str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	temp_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (temp_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		temp_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		temp_str[i + j] = s2[j];
		j++;
	}
	temp_str[i + j] = '\0';
	return (temp_str);
}
