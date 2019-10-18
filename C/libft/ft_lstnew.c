/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 16:19:58 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/25 17:11:28 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*list;

	list = (t_list *)ft_memalloc(content_size);
	if (!list)
		return (NULL);
	if (!content)
	{
		list->content = 0;
		list->content_size = 0;
	}
	else
	{
		list->content = ft_memalloc(content_size);
		if (!list->content)
		{
			free(list);
			return (NULL);
		}
		ft_memmove(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}
