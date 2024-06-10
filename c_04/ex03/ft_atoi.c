/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:47:51 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/27 15:49:50 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	min_counter;

	while (*str == ' ' || (*str <= 13 && *str >= 9))
	{
		str++;
	}
	min_counter = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min_counter *= -1;
		str++;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * min_counter);
}
