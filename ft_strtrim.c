/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:41:22 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/04 15:52:57 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	ismatched;

	i = 0;
	while (s1[i])
	{
		ismatched = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				ismatched = 1;
				break ;
			}
			j++;
		}
		if (!ismatched)
			break ;
		i++;
	}
	return (i);
}

static int	get_end(char const *s1, char const *set, int start)
{
	int	j;
	int	ismatched;
	int	len_s1;

	len_s1 = ft_strlen(s1) - 1;
	while (len_s1 >= start)
	{
		ismatched = 0;
		j = 0;
		while (set[j])
		{
			if (s1[len_s1] == set[j])
			{
				ismatched = 1;
				break ;
			}
			j++;
		}
		if (!ismatched)
			break ;
		len_s1--;
	}
	return (len_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		i;
	int		k;
	int		len_s1;
	int		len_temp;

	k = 0;
	i = get_start(s1, set);
	len_s1 = get_end(s1, set, i);
	len_temp = len_s1 - i + 1;
	temp = malloc((len_temp + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (len_temp--)
		temp[k++] = s1[i++];
	temp[k] = '\0';
	return (temp);
}
