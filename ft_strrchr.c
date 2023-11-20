/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:23:31 by maricont          #+#    #+#             */
/*   Updated: 2023/02/17 18:20:52 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)s;
	while (s[i] != '\0')
		i++;
	if ((char)c == '\0')
	{
		return (&dest[i]);
	}
	while (i >= 0)
	{
		if (dest[i] == (char)c)
			return (&dest[i]);
		i--;
	}
	return (NULL);
}
