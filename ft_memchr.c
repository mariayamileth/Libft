/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:12:41 by maricont          #+#    #+#             */
/*   Updated: 2023/02/16 12:28:18 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)s;
	while (i < n)
	{
		if (dest[i] == (char)c)
			return (&(dest[i]));
		i++;
	}
	return (NULL);
}
