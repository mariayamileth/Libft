/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:40:56 by maricont          #+#    #+#             */
/*   Updated: 2023/02/16 12:16:21 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr(char *str, int i)
{
	int	n;

	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = str[i] - '0' + (n * 10);
		i++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	signo;
	int	k;

	i = 0;
	signo = 1;
	k = 1;
	while ((str[i] == '\f' || str[i] == '\n')
		|| (str[i] == '\r' || str[i] == '\t')
		|| (str[i] == '\v' || str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -1;
		i++;
		k++;
	}
	if (k > 2)
		return (0);
	n = ft_nbr((char *)str, i);
	return (n * signo);
}
