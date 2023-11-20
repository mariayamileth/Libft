/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:26:40 by maricont          #+#    #+#             */
/*   Updated: 2023/02/16 10:49:17 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	dest = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		dest[i] = ((char *)s1)[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		dest [i + j] = ((char *)s2)[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}
