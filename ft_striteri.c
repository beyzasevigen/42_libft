/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsevigen <bsevigen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:05:49 by bsevigen          #+#    #+#             */
/*   Updated: 2025/07/01 14:54:09 by bsevigen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	f_bzero(unsigned int i, char *s)
{
	*s = 0;
}
*/
/*

int main()
{
	char s[] = "abcdef";
	printf("%p", s);
   ft_striteri(s, f_bzero);
	int i;
	i = 0;
	while (i < 8)
	{
		printf("%d", s[i]);
		i++;
	} */