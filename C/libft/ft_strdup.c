/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:52:18 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/18 17:35:02 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dub;
	size_t	len;

	len = ft_strlen(str);
	dub = ft_memalloc(len + 1);
	if (dub == NULL)
		return (NULL);
	while (len + 1 != 0)
	{
		dub[len] = str[len];
		len--;
	}
	return (dub);
}
