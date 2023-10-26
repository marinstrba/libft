/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:09:50 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/21 12:58:28 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	unsigned char	*res;
	size_t			index;
	size_t			total;

	index = 0;
	total = num_elements * element_size;
	res = (unsigned char *) malloc(total);
	if (res == NULL)
		return (NULL);
	while (index < total)
	{
		res[index] = 0;
		index++;
	}
	return ((void *)res);
}
