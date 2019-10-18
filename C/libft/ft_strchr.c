/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:57:25 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/20 16:15:00 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	if (*str == '\0' && ch)
		return (NULL);
	else if (!ch && *str == '\0')
		return ((char *)str);
	while (*str && *str != (char)ch)
		str++;
	if (*str == (char)ch)
		return ((char *)str);
	return (NULL);
}
