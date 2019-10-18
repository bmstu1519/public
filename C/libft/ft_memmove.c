/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:22:14 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/22 06:36:04 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *cpy, const void *source, size_t n)
{
	char		*c;
	const char	*s;

	if (cpy == source || n == 0)
		return (cpy);
	c = (char *)cpy;
	s = (char *)source;
	if (source < cpy)
	{
		while (n != 0)
		{
			c[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		while (n-- != 0)
			*c++ = *s++;
	return (cpy);
}
