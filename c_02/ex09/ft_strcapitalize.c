/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:08:04 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/20 09:37:10 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		i;
	int		next;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next == 1 && 'a' <= c && c <= 'z')
			str[i] = c - 32;
		else if (next == 0 && 'A' <= c && c <= 'Z')
			str[i] = c + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
