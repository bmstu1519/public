/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:57:22 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/18 14:11:57 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t		i;

	i = 0;
	while (str1[i])
		i++;
	while (n != 0 && *str2)
	{
		str1[i] = *str2;
		i++;
		str2++;
		n--;
	}
	str1[i] = '\0';
	return (str1);
}
