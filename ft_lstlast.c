/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:04:59 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/24 16:09:17 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cnt;

	if (!lst)
		return (NULL);
	cnt = lst;
	while (cnt->next != NULL)
	{
		cnt = cnt->next;
	}
	return (cnt);
}
