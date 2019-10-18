/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:47:43 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/22 06:37:09 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *cpy, const void *source, size_t n)
{
	unsigned char		*c;
	unsigned char		*s;

	if (cpy && source)
	{
		c = (unsigned char *)cpy;
		s = (unsigned char *)source;
	}
	while (n-- != 0)
		*c++ = *s++;
	return (cpy);
}
