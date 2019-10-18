/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:37:48 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/15 15:27:41 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	char		*d;

	if (n == 0)
		return (dest);
	d = (char *)dest;
	while (n != 0)
	{
		*d = c;
		d++;
		n--;
	}
	return (dest);
}
