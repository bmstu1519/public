/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:07:09 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/20 19:58:32 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fresh;

	fresh = ft_memalloc(len + 1);
	if (!s || !(fresh = ft_memalloc(len + 1)))
		return (NULL);
	fresh = ft_strncpy(fresh, (char *)s + start, len);
	return (fresh);
}
