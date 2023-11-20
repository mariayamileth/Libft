/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:15:38 by maricont          #+#    #+#             */
/*   Updated: 2023/02/15 15:44:51 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_min(char *str)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_str(int n, int len, int n2)
{
	char	*dest;
	int		aux;

	aux = n;
	while (aux > 0)
	{
		aux = aux / 10;
		len++;
	}
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	while (len > 0)
	{
		len--;
		dest[len] = n % 10 + '0';
		n = n / 10;
	}
	if (n2 < 0)
		dest[len] = '-';
	return (dest);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dest;
	int		n2;

	len = 0;
	n2 = n;
	if (n == -2147483648)
		return (ft_min ("-2147483648"));
	if (n <= 0)
	{
		n = n * -1;
		len = len + 1;
	}
	dest = ft_str(n, len, n2);
	return (dest);
}
