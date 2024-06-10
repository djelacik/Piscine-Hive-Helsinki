/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:39:55 by djelacik          #+#    #+#             */
/*   Updated: 2024/03/07 11:44:16 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	length;

	length = 0;
	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			length++;
			j++;
		}
		i++;
	}
	return (length + (size - 1) * ft_strlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		index;
	char	*array;
	char	*empty;

	array = (char *)malloc(length(size, strs, sep) + 1);
	if (!array)
		return (0);
	if (size == 0)
		return (malloc(1));
	index = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			array[index++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			array[index++] = sep[j++];
		i++;
	}
	array[index] = '\0';
	return (array);
}
