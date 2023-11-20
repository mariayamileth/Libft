/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:29:37 by maricont          #+#    #+#             */
/*   Updated: 2023/02/16 12:24:49 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_calloc(size_t cont, size_t size)
{	
	size_t	i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(cont * size);
	if (!str)
		return (NULL);
	while (i < (cont * size))
	{
		str[i] = (char)j;
		i++;
	}
	return (str);
}
/*
int	main()
{
	int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)ft_calloc(0, 0);
	while (str[i] !='\0' )
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}*/
