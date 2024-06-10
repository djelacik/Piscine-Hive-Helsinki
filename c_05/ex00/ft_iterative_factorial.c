/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:25:13 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/22 13:51:40 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	if (nb < 0)
		return (0);
	i = 1;
	ans = 1;
	while (i <= nb)
	{
		ans *= i;
		i++;
	}
	return (ans);
}
