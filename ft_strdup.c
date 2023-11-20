/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:24:29 by maricont          #+#    #+#             */
/*   Updated: 2023/02/17 19:15:12 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(s);
	ptr = (char *)malloc((n + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i <= n)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
