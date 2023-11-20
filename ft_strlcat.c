/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:05:32 by maricont          #+#    #+#             */
/*   Updated: 2023/02/16 11:02:57 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	aux;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
		j++;
	aux = j;
	while (src[k] != '\0')
		k++;
	if (j > size || size == 0)
		return (size + k);
	while (src[i] != '\0' && j < (size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (aux + k);
}
