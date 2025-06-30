/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:15:22 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/28 14:13:43 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup (const char *s1)
{
    char *tmp;
    tmp = malloc(ft_strlen (s1) + 1);
    int i;
    i = 0;
    while(s1[i])
    {
        tmp [i] = s1[i];
        i++;
    }
    tmp [i] = '\0';
    return (tmp);
}

int main ()
{
char *tmp = "merhaba jfhj hjdhaeeee";
printf ("%s", ft_strdup(tmp));
}