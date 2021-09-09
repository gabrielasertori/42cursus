/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:35:51 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/09 12:38:29 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst->content);
}