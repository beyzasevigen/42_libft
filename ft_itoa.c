/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:10:01 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/04 16:27:32 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long temp)
{
	int	len;

	len = 1;
	if (temp < 0)
	{
		temp *= -1;
		len++;
	}
	while (temp > 9)
	{
		temp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	temp;
	int		len;

	temp = n;
	len = get_len(temp);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (temp < 0)
	{
		str[0] = '-';
		temp *= -1;
	}
	while (len--)
	{
		if (str[len] == '-')
			break ;
		str[len] = '0' + temp % 10;
		temp /= 10;
	}
	return (str);
}
