/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:34:51 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/21 12:16:30 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_match(char *str, char *to_find)
{
	unsigned int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	j = 0;
	while (str[j])
	{
		if (is_match(&str[j], to_find))
		{
			return (&str[j]);
		}
		j++;
	}
	return (NULL);
}

/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main() {
    char str[] = "Hello, world!";
    char to_find[] = "world";
    char *result = ft_strstr(str, to_find);

    if (result != NULL)
	{
        printf("Found: %s\n", result);
    }
	else
	{
        printf("Not found.\n");
    }

    return 0;
}
*/
