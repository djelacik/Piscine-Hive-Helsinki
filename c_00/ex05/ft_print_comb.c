/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:06:55 by djelacik          #+#    #+#             */
/*   Updated: 2024/02/15 11:14:11 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char nb0, char nb1, char nb2)
{
	write(1, &nb0, 1);
	write(1, &nb1, 1);
	write(1, &nb2, 1);
	if (nb0 != '7' || nb1 != '8' || nb2 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a ++;
	}
}
