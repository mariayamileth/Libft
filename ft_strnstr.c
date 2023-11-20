/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:37:28 by maricont          #+#    #+#             */
/*   Updated: 2023/01/24 15:52:02 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && (size_t)i < len)
	{
		while (to_find[j] == str[j + i] && to_find[j] != '\0'
			&& (size_t)(i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		j = 0;
		i++;
	}
	return (NULL);
}
