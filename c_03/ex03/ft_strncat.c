/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:35:48 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/22 11:14:05 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main() {
	unsigned int i = 4;

    char str1[20] = "Hello";
    char str2[] = " World";

	ft_strncat(str1, str2, i);
    printf("Combined string is: %s\n", str1);

    return 0;
}
*/
