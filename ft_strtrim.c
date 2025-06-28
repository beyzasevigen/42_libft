/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:41:22 by bsevigen          #+#    #+#             */
/*   Updated: 2025/06/28 14:14:12 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *temp;
    int i;
    int j;
    int k;
    int len_s1;
    int ismatched;
    int len_temp;

    i = 0;
    k = 0;
    len_s1 = ft_strlen(s1) - 1;
    while (s1[i])  //aabacevapbaaba
    {
        ismatched = 0;
        j = 0;
        while (set[j]) //a b
        {
            if (s1[i] == set[j])
            {
                ismatched = 1;
                break;
            }
            j++;
        }
        if (!ismatched)
            break;
        i++;
    }
    while (len_s1 >= i)  //aabacevapbaaba
    {
        ismatched = 0;
        j = 0;
        while (set[j]) //a b
        {
            if (s1[len_s1] == set[j])
            {
                ismatched = 1;
                break;
            }
            j++;
        }
        if (!ismatched)
            break;
        len_s1--;
    }

    len_temp = len_s1 - i + 1;
    temp = malloc((len_temp + 1) * sizeof(char));
    if (!temp)
        return (NULL);
    while (len_temp)
    {
        temp[k++] = s1[i++];
        len_temp--;
    }
    temp[k] = '\0';
    return (temp);
}

int main(void)
{
    printf("%s", ft_strtrim("ababaaaMy name is Simonbbaaabba", "ab"));
}