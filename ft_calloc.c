/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:34:31 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/12 18:39:16 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Calloc allocates bytes and put 0s inside.
 * The return value is the pointer to the first allocated memory.
 * p iterate the string and reaches the end of the allocated bytes
 * putting 0 inside them. Than, pointer return the beggining of
 * the memory.
 */

void	*ft_calloc(size_t	nbr, size_t	size)
{
	char	*p;
	char	*pointer;
	size_t	amount;

	amount = nbr * size;
	p = (char *) malloc(amount);
	if (!p)
		return (NULL);
	pointer = p;
	while (amount > 0)
	{
		*p = 0;
		amount--;
		if (amount == 0)
			return ((void *) pointer);
		p++;
	}
	return (NULL);
}
