/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:42:00 by maricont          #+#    #+#             */
/*   Updated: 2023/02/16 12:32:05 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)s;
	while (dest[i] != '\0')
	{
		if (dest[i] == (char)c)
			return (&dest[i]);
		i++;
	}
	if ((char)c == '\0')
	{
		return (&dest[i]);
	}
	return (NULL);
}
