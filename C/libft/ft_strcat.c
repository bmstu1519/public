/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:57:22 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/15 15:17:41 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int		i;

	i = 0;
	while (str1[i])
		i++;
	while (*str2)
	{
		str1[i] = *str2;
		i++;
		str2++;
	}
	str1[i] = '\0';
	return (str1);
}
