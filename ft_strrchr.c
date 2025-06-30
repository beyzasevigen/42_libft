/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 17:25:54 by bsevigen            #+#    #+#             */
/*   Updated: 2025/06/29 17:25:54 by bsevigen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int last;

    last = ft_strlen(s);
    while (last >= 0)
    {
        if (s[last] == (char)c)
            return (&s[last]);
        last--;
    }
    return (NULL);
}
