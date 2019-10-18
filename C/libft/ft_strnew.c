/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:41:48 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/18 18:51:06 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = ft_memalloc(size + 1);
	if (new == NULL)
		return (NULL);
	while (*new)
	{
		*new = 0;
		new++;
	}
	return (new);
}
