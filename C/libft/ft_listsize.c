/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 18:03:36 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/25 18:03:50 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_listsize(t_list *begin_list)
{
	int		i;
	t_list	*list;

	i = 1;
	list = (begin_list);
	if (begin_list == NULL)
		i = 0;
	else
	{
		while (list->next != NULL)
		{
			i++;
			list = list->next;
		}
	}
	return (i);
}
