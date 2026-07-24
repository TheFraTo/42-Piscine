/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 10:01:37 by username          #+#    #+#             */
/*   Updated: 2026/07/23 12:00:08 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	c;

	res = 1;
	c = 0;
	if (power < 0)
		return (0);
	while (c < power)
	{
		res = res * nb;
		c++;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(0, 0));
// 	return (0);
// }
