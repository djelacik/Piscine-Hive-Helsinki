/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:55:15 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/27 11:40:42 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	if (argc <= 1)
	{
		return (0);
	}
	k = argc - 1;
	while (k >= 1)
	{
		i = 0;
		while (argv[k][i])
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k--;
	}
}
