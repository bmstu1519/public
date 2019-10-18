/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:07:09 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/20 16:04:54 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	j = 0;
	if (s2[j] == '\0')
		return ((char *)&s1[j]);
	while (s1[j])
	{
		i = 0;
		while (s1[j + i] == s2[i])
		{
			i++;
			if (s2[i] == '\0')
				return ((char *)&s1[j]);
		}
		j++;
	}
	return (NULL);
}
