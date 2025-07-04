/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:23:15 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/04 19:26:45 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (i != 0 && s[i] != c && s[i - 1] == c)
			counter++;
		else if (i == 0 && (s[0] != c))
			counter++;
		i++;
	}
	return (counter);
}

static void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_put_str(char **arr, char c, const char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		while (s[j] && s[j] == c)
			j++;
		s += j;
		if (*s)
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			arr[i] = ft_substr(s, 0, j);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		count;

	count = count_words(s, c);
	arr = malloc(sizeof (char *) * (count + 1));
	if (!arr)
		return (0);
	arr = ft_put_str(arr, c, s);
	if (!arr)
		free_all(arr);
	return (arr);
}
