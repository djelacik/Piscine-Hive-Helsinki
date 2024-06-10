/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:24:20 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/21 12:17:07 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	i = 0;
	while (dest[i])
		i++;
	l = i;
	k = 0;
	while (src[k])
		k++;
	if (size <= i)
		return (size + k);
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (k + l);
}

/*
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 20;
    unsigned int result;

    result = ft_strlcat(dest, src, size);

    printf("After strlcat: '%s'\n", dest);
    printf("Total length: %u\n", result);

    return 0;
}
*/
