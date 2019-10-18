/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 17:58:15 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/25 18:07:23 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list			*list;
	unsigned int	len;

	len = ft_listsize(lst);
	list = lst;
	while (len)
	{
		f(list);
		list = list->next;
		len--;
	}
}
