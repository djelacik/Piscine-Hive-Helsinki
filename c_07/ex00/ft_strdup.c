/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:05:14 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/29 14:41:03 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	i;
	unsigned int	j;
	char			*ptr;

	i = 0;
	while (src[i])
	{
		i++;
	}
	ptr = (char *)malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (src[j])
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}
