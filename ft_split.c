/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:23:15 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/27 19:39:24 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
    int counter;
    int i;

    counter = 0;
    i = 0;
    while (s[i]) //gdushfu    hd hdj jd
    {
        if (i != 0 && s[i] != c && s[i - 1] == c)
            counter++;
        else if (i == 0 && (s[0] != c))
            counter++;
        i++;
    }
    return counter;
}

static int word_len(char const *s,  char c)
{
	int len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char **word_dup(char const *s,  char c)
{
	int i;
	int j;
	char **str;
	int word_count;

	i = 0;
	j = 0;
	word_count = count_words(s, c);
	str = malloc((word_count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
		
	str[word_count] = NULL;
	while (str[i])
	{
		ft_substr(s,0,word_len(s,c));
		str[i] = malloc(ft_strlen(str[i]) * sizeof(char));
		
		if (!str)
			return (NULL);
		i++;
	}
}

static void free_all(char **str)
{
	int i;

	i = 0;
	while(str[i])
	{
		free(str[i]);
		i++;
	}
	free(str[i]);
	free(str);
}



char **ft_split(char const *s, char c)
{
	char **full_str;
	int count_word;

	
}
// "merhaba dünya" =s 