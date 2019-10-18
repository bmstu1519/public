/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 17:19:50 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/25 17:47:45 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*list;

	list = *alst;
	if (list->next != NULL)
		ft_lstdel(&list->next, del);
	del(list->content, list->content_size);
	free(list);
	*alst = NULL;
}
