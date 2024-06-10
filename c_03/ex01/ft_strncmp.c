/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:46:44 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/21 19:03:53 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	while (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
 #include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main() {
	unsigned int i = 5;
    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "Hella";

    printf("str1 vs str2 %d\n", ft_strncmp(str1, str2, i));
    printf("str1 vs str2 %d\n", ft_strncmp(str1, str3, i));

    return 0;
}
*/
