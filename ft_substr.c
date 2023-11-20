/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:39:18 by maricont          #+#    #+#             */
/*   Updated: 2023/02/23 10:29:48 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) - start <= len)
		len = ft_strlen(s) - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len && ((char *)s)[start] != '\0')
	{	
		dest[i] = ((char *)s)[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	int i;
	char	*dest;
	i = 0;
	dest = ft_substr("", 1, 1);
	while (dest[i] != '\0')
	{
		write (1, &dest[i], 1);
		i++;
	}
	return (0);
}
*/
/*

// incompleta*/
