/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nospaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:40:23 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/22 00:56:49 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nospaces(const char *s)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (!(ft_isalpha(s[i])) || !(ft_isdigit(s[i])))
		i++;
	while (s[i] != '\0')
	{
		if (!(ft_isalpha(s[i])) || !(ft_isdigit(s[i])))
			len++;
		i++;
	}
	if (s[i] == '\0')
	{
		while (!(ft_isdigit(s[i])) && !(ft_isalpha(s[i - 1])))
		{
			len--;
			i--;
		}
	}
	return (len);
}
