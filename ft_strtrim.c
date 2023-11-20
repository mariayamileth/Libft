/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricont <maricont@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:55:07 by maricont          #+#    #+#             */
/*   Updated: 2023/02/17 19:09:50 by maricont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char *s1, char *set)
{
	int	n;
	int	i;
	int	j;

	n = 1;
	i = 0;
	while (s1[i] != '\0' && n != 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				n++;
				break ;
			}
			else
				n = 0;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

int	ft_count2(char *s1, char *set)
{
	int	n;
	int	i;
	int	j;

	n = 1;
	i = ft_strlen(s1);
	while (i > 0 && n != 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i - 1] == set[j])
			{
				n++;
				break ;
			}
			else
				n = 0;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	char	*dest;
	int		n;
	int		p;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	n = ft_count ((char *)s1, (char *)set);
	p = ft_count2 ((char *)s1, (char *)set);
	if (n > p)
	{
		n = p;
		j = 1;
	}
	dest = (char *)malloc((p - n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (n < p && j != 1)
		dest[i++] = ((char *)s1)[n++];
	dest[i] = '\0';
	return (dest);
}
/*int	main()
{
	int	i;
	char	*s1;
	char	*set;
	char	*dest;

	i = 0;
	set = "que";
	s1 = "queholaqqq";
	dest = ft_strtrim(s1, set);
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return(0);
}*/
