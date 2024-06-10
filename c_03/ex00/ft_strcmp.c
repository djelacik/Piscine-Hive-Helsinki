/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:49:40 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/21 11:51:19 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main() {
    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "Hella";

    printf("str1 vs str2 %d\n", ft_strcmp(str1, str2));
    printf("str1 vs str2 %d\n", ft_strcmp(str1, str3));

    return 0;
}
*/
