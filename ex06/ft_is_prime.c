/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 11:19:39 by username          #+#    #+#             */
/*   Updated: 2026/07/23 12:02:27 by username           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(7));
// 	printf("%d\n", ft_is_prime(10));
// 	return (0);
// }
