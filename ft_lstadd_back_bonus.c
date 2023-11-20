/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:33:26 by maricont          #+#    #+#             */
/*   Updated: 2023/02/23 19:11:58 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			if (*lst)
			{
				aux = ft_lstlast(*lst);
				aux -> next = new;
			}
		}
	}
}
