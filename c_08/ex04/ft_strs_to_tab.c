/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:03:11 by djelacik          #+#    #+#             */
/*   Updated: 2024/03/07 19:49:43 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *str)
{
	int		c;
	char	*copy;

	c = 0;
	while (str[c] != '\0')
		c++;
	copy = malloc((c + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
	{
		copy[c] = str[c];
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					c;
	struct s_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == NULL)
		return (NULL);
	c = 0;
	while (c < ac)
	{
		arr[c].size = ft_strlen(av[c]);
		arr[c].str = av[c];
		arr[c].copy = ft_strdup(av[c]);
		c++;
	}
	arr[c].size = 0;
	arr[c].str = 0;
	arr[c].copy = 0;
	return (arr);
}
