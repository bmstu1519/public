/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:21:39 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/23 20:01:45 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char *first;
	unsigned char *second;

	first = (unsigned char *)arr1;
	second = (unsigned char *)arr2;
	while (n != 0)
	{
		if (*first != *second)
			return (*first - *second);
		first++;
		second++;
		n--;
	}
	return (0);
}
