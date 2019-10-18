/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 03:46:16 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/22 03:47:02 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t j;
	size_t sum;

	i = 0;
	while (s1[i] != '\0')
		++i;
	sum = 0;
	while (s2[sum] != '\0')
		++sum;
	if (size <= i)
		sum += size;
	else
		sum += i;
	j = 0;
	while (s2[j] != '\0' && i + 1 < size)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (sum);
}
