/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 10:25:45 by username          #+#    #+#             */
/*   Updated: 2026/07/23 12:02:44 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(5, 3));
// 	// 125.
// 	printf("%d\n", ft_recursive_power(2, 4));
// 	// 16
// 	printf("%d\n", ft_recursive_power(5, 0));
// 	// 1
// 	printf("%d\n", ft_recursive_power(5, -2));
// 	// 0
// 	return (0);
// }
