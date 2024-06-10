/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:08:05 by djelacik          #+#    #+#             */
/*   Updated: 2024/03/07 11:33:45 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	else
	{
		range = max - min;
		array = (int *)malloc(range * sizeof(int));
		i = 0;
		while (i < range)
		{
			array[i] = min + i;
			i++;
		}
	}
	return (array);
}
