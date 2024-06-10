/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:55:06 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/29 13:25:59 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb == 1)
		return (1);
	root = 0;
	while (root <= nb / 2 && root < 46341)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
