/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 19:42:04 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/28 17:42:35 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    if (!s)
        return (NULL);
    size_t s_len = ft_strlen(s);
    if (start >= s_len)
    {
        char *empty = malloc(1);
        if (!empty)
            return (NULL);
        empty[0] = '\0';
            return (empty);
    }

    size_t new_len = s_len - start;
    if (len > new_len)
        len = new_len;

    char *substr = malloc(len +1);
    if (!substr)
        return (NULL);

    size_t i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

int main(void)
{
    printf("%s",ft_substr("Merhaba Dünya", 8, 6));
    return 0;
}