/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:57:25 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/18 12:13:46 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	if (ft_strchr(str, ch) == NULL)
		return (NULL);
	while (*str)
		str++;
	while (*str != (char)ch)
		str--;
	return ((char *)str);
}
