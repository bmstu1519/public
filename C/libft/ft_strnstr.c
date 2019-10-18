/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:02:09 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/25 15:07:37 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	if (*s1 && !(*s2) && n == 0)
		return ((char *)&s1[j]);
	if (s2[j] == '\0')
		return ((char *)&s1[j]);
	while (s1[j] && j < n)
	{
		i = 0;
		while (s1[j + i] == s2[i] && s2[j] != '\0' && i + j < n)
		{
			i++;
			if (s2[i] == '\0')
				return ((char *)&s1[j]);
		}
		j++;
	}
	return (NULL);
}
